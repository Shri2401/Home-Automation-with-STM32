/*
 * @File name (dht11.c)
 * @File Description (
 * initializes i2c communication 
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @attributes: https://components101.com/displays/oled-display-ssd1306
 *
 */
#ifndef OLED_I2C_TIMEOUT
#define OLED_I2C_TIMEOUT					20000
#endif

#include "ssd1306.h"
/**
 * @brief  Initializes OLED LCD
 * @param  None
 * @return None
 */
void OLED_I2C_Init();

/**
 * @brief  Writes single byte to slave
 * @param  addr: 7 bit slave addr, left aligned, bits 7:1 are used, LSB bit is not used
 *         reg: register to write to
 *         data: data to be written
 * @return None
 */
void OLED_I2C_Write(uint8_t addr, uint8_t reg, uint8_t data);

/**
 * @brief  Writes multi bytes to slave
 * @param  addr: 7 bit slave addr, left aligned, bits 7:1 are used, LSB bit is not used
 *         reg: register to write to
 *         data: pointer to data array to write it to slave
 *         count: how many bytes will be written
 * @return None
 */
void OLED_I2C_WriteMulti(uint8_t addr, uint8_t reg, uint8_t *data, uint16_t count);
