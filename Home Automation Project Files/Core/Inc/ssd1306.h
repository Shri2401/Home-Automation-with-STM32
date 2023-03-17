/*
 * @File name (dht11.c)
 * @File Description (
 * functions for oled display  
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @attributes: https://components101.com/displays/oled-display-ssd1306
 *
 */
#ifndef OLED_H
#define OLED_H 100

#include "stm32f4xx_hal.h"
#include "fonts.h"
#include "stdlib.h"
#include "string.h"


/* I2C address */
#ifndef OLED_I2C_ADDR
#define OLED_I2C_ADDR         0x78
//#define OLED_I2C_ADDR       0x7A
#endif
/* OLED settings */
/* OLED width in pixels */
#ifndef OLED_WIDTH
#define OLED_WIDTH            128
#endif
/* OLED LCD height in pixels */
#ifndef OLED_HEIGHT
#define OLED_HEIGHT           64
#endif

/**
 * @brief  OLED color enumeration
 */
typedef enum {
	OLED_COLOR_BLACK = 0x00, /*!< Black color, no pixel */
	OLED_COLOR_WHITE = 0x01  /*!< Pixel is set. Color depends on LCD */
} OLED_COLOR_t;



/**
 * @brief  Initializes OLED LCD
 * @param  None
 * @return None
 */
uint8_t OLED_Init(void);

/** 
 * @brief  Updates buffer from internal RAM to LCD
 * @param  None
 * @return None
 */
void OLED_UpdateScreen(void);


/**
 * @brief  Fills the particular pixel high
 * @param  Color
 * @return None
 */
void OLED_Fill(OLED_COLOR_t Color);

/**
 * @brief  Draws pixel at desired location
 * @param   X location. This parameter can be a value between 0 and OLED_WIDTH - 1
            Y location. This parameter can be a value between 0 and OLED_HEIGHT - 1
            color: Color to be used for screen fill. This parameter can be a value of @ref OLED_COLOR_t enumeration
 * @return None
 */
void OLED_DrawPixel(uint16_t x, uint16_t y, OLED_COLOR_t color);

/**
 * @brief  Sets cursor pointer to desired location for strings
 * @param   X location. This parameter can be a value between 0 and OLED_WIDTH - 1
            Y location. This parameter can be a value between 0 and OLED_HEIGHT - 1
 * @return None
 */
void OLED_GotoXY(uint16_t x, uint16_t y);

/**
 * @brief  Puts character to internal RAM
 * @param  ch: Character to be written
           Font: Pointer to @ref FontDef_t structure with used font
           color: Color used for drawing. This parameter can be a value of @ref OLED_COLOR_t enumeration
 * @retval None
 */
char OLED_Putc(char ch, FontDef_t* Font, OLED_COLOR_t color);

/**
 * @brief  Puts string to internal RAM
 * @param  *str: String to be written
           *Font: Pointer to @ref FontDef_t structure with used font
            color: Color used for drawing. This parameter can be a value of @ref OLED_COLOR_t enumeration
 * @return None
 */
char OLED_Puts(char* str, FontDef_t* Font, OLED_COLOR_t color);


/**
 * @brief  Draws the Bitmap
 * @param  X:  X location to start the Drawing
 *         Y:  Y location to start the Drawing
 *         *bitmap : Pointer to the bitmap
 *         W : width of the image
 *         H : Height of the image
 *         color : 1-> white/blue, 0-> black
 */
void OLED_DrawBitmap(int16_t x, int16_t y, const unsigned char* bitmap, int16_t w, int16_t h, uint16_t color);

/**
 * @brief  inverts the display
 * @param  i
 * @return i = 1->inverted, i = 0->normal
 */


void OLED_InvertDisplay (int i);

/**
 * @brief  clear the display
 * @param  none
 * @return none
 */
void OLED_Clear (void);

/**
 * @brief  turns off display
 * @param  none
 * @return none
 */
void OLED_OFF(void);

/**
 * @brief  turns on display
 * @param  none
 * @return none
 */
void OLED_ON(void);

#endif
