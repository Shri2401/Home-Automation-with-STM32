/*
 * @File name (dht11.c)
 * @File Description (
 * functions for OLED display   
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @attributes: https://components101.com/displays/oled-display-ssd1306
 *
 */
#include "SSD1306.h"
#include "i2c_ssd1306.h"

extern I2C_HandleTypeDef hi2c1;
/* Write command */
#define OLED_WRITECOMMAND(command)      OLED_I2C_Write(OLED_I2C_ADDR, 0x00, (command))
/* Write data */
#define OLED_WRITEDATA(data)            OLED_I2C_Write(OLED_I2C_ADDR, 0x40, (data))
/* Absolute value */
#define ABS(x)   ((x) > 0 ? (x) : -(x))

/* OLED data buffer */
static uint8_t OLED_Buffer[OLED_WIDTH * OLED_HEIGHT / 8];

/* Private OLED structure */
typedef struct {
	uint16_t CurrentX;
	uint16_t CurrentY;
	uint8_t Inverted;
	uint8_t Initialized;
} OLED_t;

/* Private variable */
static OLED_t OLED;


#define OLED_NORMALDISPLAY       0xA6
#define OLED_INVERTDISPLAY       0xA7



/**
 * @brief  inverts the display
 * @param  i
 * @return i = 1->inverted, i = 0->normal
 */

void OLED_InvertDisplay (int i)
{
  if (i) OLED_WRITECOMMAND (OLED_INVERTDISPLAY);

  else OLED_WRITECOMMAND (OLED_NORMALDISPLAY);

}

/**
 * @brief  Draws the Bitmap
 * @param  X:  X location to start the Drawing
 *         Y:  Y location to start the Drawing
 *         *bitmap : Pointer to the bitmap
 *         W : width of the image
 *         H : Height of the image
 *         color : 1-> white/blue, 0-> black
 */
void OLED_DrawBitmap(int16_t x, int16_t y, const unsigned char* bitmap, int16_t w, int16_t h, uint16_t color)
{

    int16_t byteWidth = (w + 7) / 8; // Bitmap scan line pad = whole byte
    uint8_t byte = 0;

    for(int16_t j=0; j<h; j++, y++)
    {
        for(int16_t i=0; i<w; i++)
        {
            if(i & 7)
            {
               byte <<= 1;
            }
            else
            {
               byte = (*(const unsigned char *)(&bitmap[j * byteWidth + i / 8]));
            }
            if(byte & 0x80) OLED_DrawPixel(x+i, y, color);
        }
    }
}

/**
 * @brief  Initializes OLED LCD
 * @param  None
 * @return None
 */
uint8_t OLED_Init(void) {

	/* Init I2C */
	OLED_I2C_Init();
	
	/* Check if LCD connected to I2C */
	if (HAL_I2C_IsDeviceReady(&hi2c1, OLED_I2C_ADDR, 1, 20000) != HAL_OK) {
		/* Return false */
		return 0;
	}
	
	/* A little delay */
	uint32_t p = 2500;
	while(p>0)
		p--;
	
	/* Init LCD */
	OLED_WRITECOMMAND(0xAE); //display off
	OLED_WRITECOMMAND(0x20); //Set Memory Addressing Mode
	OLED_WRITECOMMAND(0x10); //00,Horizontal Addressing Mode;01,Vertical Addressing Mode;10,Page Addressing Mode (RESET);11,Invalid
	OLED_WRITECOMMAND(0xB0); //Set Page Start Address for Page Addressing Mode,0-7
	OLED_WRITECOMMAND(0xC8); //Set COM Output Scan Direction
	OLED_WRITECOMMAND(0x00); //---set low column address
	OLED_WRITECOMMAND(0x10); //---set high column address
	OLED_WRITECOMMAND(0x40); //--set start line address
	OLED_WRITECOMMAND(0x81); //--set contrast control register
	OLED_WRITECOMMAND(0xFF);
	OLED_WRITECOMMAND(0xA1); //--set segment re-map 0 to 127
	OLED_WRITECOMMAND(0xA6); //--set normal display
	OLED_WRITECOMMAND(0xA8); //--set multiplex ratio(1 to 64)
	OLED_WRITECOMMAND(0x3F); //
	OLED_WRITECOMMAND(0xA4); //0xa4,Output follows RAM content;0xa5,Output ignores RAM content
	OLED_WRITECOMMAND(0xD3); //-set display offset
	OLED_WRITECOMMAND(0x00); //-not offset
	OLED_WRITECOMMAND(0xD5); //--set display clock divide ratio/oscillator frequency
	OLED_WRITECOMMAND(0xF0); //--set divide ratio
	OLED_WRITECOMMAND(0xD9); //--set pre-charge period
	OLED_WRITECOMMAND(0x22); //
	OLED_WRITECOMMAND(0xDA); //--set com pins hardware configuration
	OLED_WRITECOMMAND(0x12);
	OLED_WRITECOMMAND(0xDB); //--set vcomh
	OLED_WRITECOMMAND(0x20); //0x20,0.77xVcc
	OLED_WRITECOMMAND(0x8D); //--set DC-DC enable
	OLED_WRITECOMMAND(0x14); //
	OLED_WRITECOMMAND(0xAF); //--turn on OLED panel
	


	/* Clear screen */
	OLED_Fill(OLED_COLOR_BLACK);
	
	/* Update screen */
	OLED_UpdateScreen();
	
	/* Set default values */
	OLED.CurrentX = 0;
	OLED.CurrentY = 0;
	
	/* Initialized OK */
	OLED.Initialized = 1;
	
	/* Return OK */
	return 1;
}

/**
 * @brief  Updates buffer from internal RAM to LCD
 * @param  None
 * @return None
 */
void OLED_UpdateScreen(void) {
	uint8_t m;
	
	for (m = 0; m < 8; m++) {
		OLED_WRITECOMMAND(0xB0 + m);
		OLED_WRITECOMMAND(0x00);
		OLED_WRITECOMMAND(0x10);
		
		/* Write multi data */
		OLED_I2C_WriteMulti(OLED_I2C_ADDR, 0x40, &OLED_Buffer[OLED_WIDTH * m], OLED_WIDTH);
	}
}

/**
 * @brief  Fills the particular pixel high
 * @param  Color
 * @return None
 */
void OLED_Fill(OLED_COLOR_t color) {
	/* Set memory */
	memset(OLED_Buffer, (color == OLED_COLOR_BLACK) ? 0x00 : 0xFF, sizeof(OLED_Buffer));
}

/**
 * @brief  Draws pixel at desired location
 * @param   X location. This parameter can be a value between 0 and OLED_WIDTH - 1
            Y location. This parameter can be a value between 0 and OLED_HEIGHT - 1
            color: Color to be used for screen fill. This parameter can be a value of @ref OLED_COLOR_t enumeration
 * @return None
 */
void OLED_DrawPixel(uint16_t x, uint16_t y, OLED_COLOR_t color) {
	if (
		x >= OLED_WIDTH ||
		y >= OLED_HEIGHT
	) {
		/* Error */
		return;
	}
	
	/* Check if pixels are inverted */
	if (OLED.Inverted) {
		color = (OLED_COLOR_t)!color;
	}
	
	/* Set color */
	if (color == OLED_COLOR_WHITE) {
		OLED_Buffer[x + (y / 8) * OLED_WIDTH] |= 1 << (y % 8);
	} else {
		OLED_Buffer[x + (y / 8) * OLED_WIDTH] &= ~(1 << (y % 8));
	}
}


/**
 * @brief  Sets cursor pointer to desired location for strings
 * @param   X location. This parameter can be a value between 0 and OLED_WIDTH - 1
            Y location. This parameter can be a value between 0 and OLED_HEIGHT - 1
 * @return None
 */
void OLED_GotoXY(uint16_t x, uint16_t y) {
	/* Set write pointers */
	OLED.CurrentX = x;
	OLED.CurrentY = y;
}

/**
 * @brief  Puts character to internal RAM
 * @param  ch: Character to be written
           Font: Pointer to @ref FontDef_t structure with used font
           color: Color used for drawing. This parameter can be a value of @ref OLED_COLOR_t enumeration
 * @retval None
 */
char OLED_Putc(char ch, FontDef_t* Font, OLED_COLOR_t color) {
	uint32_t i, b, j;
	
	/* Check available space in LCD */
	if (
		OLED_WIDTH <= (OLED.CurrentX + Font->FontWidth) ||
		OLED_HEIGHT <= (OLED.CurrentY + Font->FontHeight)
	) {
		/* Error */
		return 0;
	}
	
	/* Go through font */
	for (i = 0; i < Font->FontHeight; i++) {
		b = Font->data[(ch - 32) * Font->FontHeight + i];
		for (j = 0; j < Font->FontWidth; j++) {
			if ((b << j) & 0x8000) {
				OLED_DrawPixel(OLED.CurrentX + j, (OLED.CurrentY + i), (OLED_COLOR_t) color);
			} else {
				OLED_DrawPixel(OLED.CurrentX + j, (OLED.CurrentY + i), (OLED_COLOR_t)!color);
			}
		}
	}
	
	/* Increase pointer */
	OLED.CurrentX += Font->FontWidth;
	
	/* Return character written */
	return ch;
}

/**
 * @brief  Puts string to internal RAM
 * @param  *str: String to be written
           *Font: Pointer to @ref FontDef_t structure with used font
            color: Color used for drawing. This parameter can be a value of @ref OLED_COLOR_t enumeration
 * @return None
 */
char OLED_Puts(char* str, FontDef_t* Font, OLED_COLOR_t color) {
	/* Write characters */
	while (*str) {
		/* Write character by character */
		if (OLED_Putc(*str, Font, color) != *str) {
			/* Return error */
			return *str;
		}
		
		/* Increase string pointer */
		str++;
	}
	
	/* Everything OK, zero should be returned */
	return *str;
}

 

/**
 * @brief  clear the display
 * @param  none
 * @return none
 */
void OLED_Clear (void)
{
	OLED_Fill (0);
    OLED_UpdateScreen();
}

/**
 * @brief  turns on display
 * @param  none
 * @return none
 */
void OLED_ON(void) {
	OLED_WRITECOMMAND(0x8D);
	OLED_WRITECOMMAND(0x14);
	OLED_WRITECOMMAND(0xAF);
}

/**
 * @brief  turns off display
 * @param  none
 * @return none
 */
void OLED_OFF(void) {
	OLED_WRITECOMMAND(0x8D);
	OLED_WRITECOMMAND(0x10);
	OLED_WRITECOMMAND(0xAE);
}


