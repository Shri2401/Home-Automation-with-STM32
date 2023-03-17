/*
 * @File name (dht11.c)
 * @File Description (
 * enables i2c communication   
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @attributes: https://components101.com/displays/oled-display-ssd1306
 *
 */
#include "i2c_ssd1306.h"
#include "main.h"
#include "ssd1306.h"

extern I2C_HandleTypeDef hi2c1;
/* Write command */
#define OLED_WRITECOMMAND(command)      OLED_I2C_Write(OLED_I2C_ADDR, 0x00, (command))
/* Write data */
#define OLED_WRITEDATA(data)            OLED_I2C_Write(OLED_I2C_ADDR, 0x40, (data))

/**
 * @brief  Initializes OLED LCD
 * @param  None
 * @return None
 */
void OLED_I2C_Init() {
	//MX_I2C1_Init();
	uint32_t p = 250000;
	while(p>0)
		p--;

}
/**
 * @brief  Writes multi bytes to slave
 * @param  addr: 7 bit slave addr, left aligned, bits 7:1 are used, LSB bit is not used
 *         reg: register to write to
 *         data: pointer to data array to write it to slave
 *         count: how many bytes will be written
 * @return None
 */
void OLED_I2C_WriteMulti(uint8_t addr, uint8_t reg, uint8_t* data, uint16_t count) {
uint8_t dt[256];
dt[0] = reg;
uint8_t i;
for(i = 0; i < count; i++)
dt[i+1] = data[i];
HAL_I2C_Master_Transmit(&hi2c1, addr, dt, count+1, 10);
}

/**
 * @brief  Writes single byte to slave
 * @param  addr: 7 bit slave addr, left aligned, bits 7:1 are used, LSB bit is not used
 *         reg: register to write to
 *         data: data to be written
 * @return None
 */
void OLED_I2C_Write(uint8_t addr, uint8_t reg, uint8_t data) {
	uint8_t dt[2];
	dt[0] = reg;
	dt[1] = data;
	HAL_I2C_Master_Transmit(&hi2c1, addr, dt, 2, 10);
}
