/*
 * @File name (dht11.c)
 * @File Description (
 * initializing DHT11 digital humidity and temporature sensor for regulating the device parameters
 * when the mode is in AUTOMODE
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @Attributions :https://www.micropeta.com/video39
 *
 */
#include "dht11.h"
#include "main.h"
#include "ssd1306.h"
#include "fonts.h"
#include <stdio.h>
/**macros *********************/
#define DHT11_PORT GPIOB
#define DHT11_PIN GPIO_PIN_9
#define timer1 htim1
#define timer2 htim4
#define TEMP1 (0)
#define TEMP2 (50)
#define TEMP3 (17)
#define TEMP4 (18)
#define TEMP5 (26)
#define TEMP6 (27)
#define TEMP7 (32)

/********variables **************/
char buff[100];
extern TIM_HandleTypeDef timer1;
extern TIM_HandleTypeDef timer2;

uint8_t RH_Int, RH_Dec, TC_Int, TC_Dec,check_sum;
uint32_t msec1, msec2;
float Celsius = 0;
float Rel_Hum = 0;
float PWM = 0;
/*
 * function for delay in msec using timer 1
 *
 * Parameters:  delay in msec
 * Return: NULL
 */
void microDelay (uint16_t delay)
{
	__HAL_TIM_SET_COUNTER(&timer1, 0);
	while (__HAL_TIM_GET_COUNTER(&timer1) < delay);
}
/*
 * function for starting the communication with DHT 11 sensor
 * written according to the single way communication between sensor(slave) and processor(host)
 * https://www.electroniclinic.com/wp-content/uploads/2019/12/DHT11-datasheet.pdf
 *
 * Parameters:msec1 and msec2 counter for getting tickvalues to count time
 * Return:int output: 1 if start successful else 0.
 */
uint8_t DHT11_Start (void)
{
	int output = 0;
	GPIO_InitTypeDef GPIO_InitStructPrivate = {0};
	GPIO_InitStructPrivate.Pin = DHT11_PIN;
	GPIO_InitStructPrivate.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStructPrivate.Speed = GPIO_SPEED_FREQ_LOW;
	GPIO_InitStructPrivate.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(DHT11_PORT, &GPIO_InitStructPrivate); // set the pin as output
	HAL_GPIO_WritePin (DHT11_PORT, DHT11_PIN, 0);   // pull the pin low
	HAL_Delay(20);   // wait for 20ms
	HAL_GPIO_WritePin (DHT11_PORT, DHT11_PIN, 1);   // pull the pin high
	microDelay (30);   // wait for 30us
	GPIO_InitStructPrivate.Mode = GPIO_MODE_INPUT;
	GPIO_InitStructPrivate.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(DHT11_PORT, &GPIO_InitStructPrivate); // set the pin as input
	microDelay (40);
	if (!(HAL_GPIO_ReadPin (DHT11_PORT, DHT11_PIN)))
	{
		microDelay (80);
		if ((HAL_GPIO_ReadPin (DHT11_PORT, DHT11_PIN))) output = 1;
	}
	msec1= HAL_GetTick(); //to get the tickvalue in msec
	msec2 = HAL_GetTick();//to compare the tickvalue
	//to wait till the pin goes low within 2 us
	while ((HAL_GPIO_ReadPin (DHT11_PORT, DHT11_PIN)) && msec1 + 2 > msec2)
	{
		msec2 = HAL_GetTick();
	}
	return output;
}
/*
 * function for reading data from the sensor
 *
 * Parameters:  msec1 and msec2 counter for getting tickvalues to count time
 * Return: NULL
 */
uint8_t DHT11_Read (void)
{
	uint8_t a,b;
	//to get the first 8 bits in the bus
	for (a=0;a<8;a++)
	{
		msec1 = HAL_GetTick();
		msec2 = HAL_GetTick();

		while (!(HAL_GPIO_ReadPin (DHT11_PORT, DHT11_PIN)) && msec1 + 2 > msec2)
		{  // wait for the pin to go high
			msec2 = HAL_GetTick();
		}
		microDelay (40);   // wait for 40 us to start reading the value
		if (!(HAL_GPIO_ReadPin (DHT11_PORT, DHT11_PIN))) //if pin goes low
			b&= ~(1<<(7-a)); //read the data if low means 0
		else //if it goes high
			b|= (1<<(7-a));
	     msec1 = HAL_GetTick();
		 msec2 = HAL_GetTick();
		while ((HAL_GPIO_ReadPin (DHT11_PORT, DHT11_PIN)) && msec1+ 2 > msec2)
		{  // wait for the pin to go low ending the first transmission
			msec2 = HAL_GetTick();
		}
	}
	return b;
}
//definition in header
void fan_control_dht(){

	while(!(TC_Int>TEMP1 && TC_Int<TEMP2 && RH_Int>20)){ //to be in loop will we get valid outputs
	L1:   if(DHT11_Start()){

		    RH_Int = DHT11_Read(); // Relative humidity integral
		    RH_Dec = DHT11_Read(); // Relative humidity decimal
		    TC_Int = DHT11_Read(); // Celsius integral
			TC_Dec = DHT11_Read(); // Celsius decimal
			check_sum = DHT11_Read(); // Check sum
			HAL_Delay(500);
			if (RH_Int + RH_Dec + TC_Int + TC_Dec == check_sum)
			{
				// getting the whole number only needed
				Celsius = (float)TC_Int + (float)(TC_Dec/10.0);
				Rel_Hum = (float)RH_Int + (float)(RH_Dec/10.0);

			}
			else{
				goto L1; //to recollect data till it receives valid results
			}
		}
	}
//if temp integral value in the range of 0 to 50 deg C(sensor range)
	if(TC_Int>TEMP1 && TC_Int<TEMP2){

		//printing values on OLED
          OLED_GotoXY (10,25);
          sprintf(buff,"Temp:%d deg",TC_Int);
          OLED_Puts(buff, &Font_8x10, 1);
          sprintf(buff,"Hum:%d per ",RH_Int);
		  OLED_GotoXY (10,35);
	      OLED_Puts(buff, &Font_8x10, 1);
		 OLED_UpdateScreen();
//range1 fan speed 0%
		if (TC_Int>=TEMP1 && TC_Int<=TEMP3)
		{
			PWM =0;
			__HAL_TIM_SET_COMPARE(&timer2, TIM_CHANNEL_1,MAXPWM*PWM);
			OLED_GotoXY (20,8);
			OLED_Puts("DEVICE OFF", &Font_8x10, 1);
			OLED_UpdateScreen();
		}
		//range2 fan speed 50%
		else if(TC_Int>=TEMP4 && TC_Int<=TEMP5)
		{
			PWM = PWMODE1;
			__HAL_TIM_SET_COMPARE(&timer2, TIM_CHANNEL_1,  MAXPWM*PWM);
			OLED_GotoXY (20,8);
			OLED_Puts("DEVICE ON", &Font_8x10, 1);
			OLED_UpdateScreen();
			OLED_GotoXY (10,45);
			OLED_Puts("Speed:NORMAL", &Font_6x10, 1);
			OLED_UpdateScreen();
		}
		//range3 fan speed 70 %
		else if(TC_Int>=TEMP6 && TC_Int<=TEMP7)
		{
			PWM = PWMODE2;
			__HAL_TIM_SET_COMPARE(&timer2, TIM_CHANNEL_1,  MAXPWM*PWM);
			OLED_GotoXY (20,8);
			OLED_Puts("DEVICE ON", &Font_8x10, 1);
			OLED_UpdateScreen();
			OLED_GotoXY (10,45);
			OLED_Puts("Speed: HIGH", &Font_6x10, 1);
			OLED_UpdateScreen();
		}
		//range4 fan speed 100 %
		else
		{

			PWM =PWMODE3;
			__HAL_TIM_SET_COMPARE(&timer2, TIM_CHANNEL_1,  MAXPWM*PWM);
			OLED_GotoXY (20,8);
			OLED_Puts("DEVICE ON", &Font_8x10, 1);
			OLED_UpdateScreen();
			OLED_GotoXY (10,45);
			OLED_Puts("Speed: MAX", &Font_6x10, 1);
			OLED_UpdateScreen();


		}}
	//to print fanspeed level
		int level=PWM*100;
		sprintf(buff,"%d PER",level);
		OLED_GotoXY (85,45);
		OLED_Puts(buff, &Font_6x10, 1);
		OLED_UpdateScreen(); // update screen

	HAL_Delay(500);
}
