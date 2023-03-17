/*
 * @File name (ldr.c)
 * @File Description (
 * initializing ADC conversion of analog value of voltage collected from the voltage divider circuit of LDR
 * Calculating the PWM value according to the analog value and required light intensity)
 * @Author Name (AYSWARIYA KANNAN& SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @Attributions :https://deepbluembedded.com/stm32-light-sensor-ldr-interfacing-ambient-light-sensor-project/
 *
 */
#include "ldr.h"
#include "main.h"
/**Macros ********************************/
#define MAXR   (4096)  //maximum voltage value
#define COUNTER (65535) //maximum counter value for pwm
#define ONESEC (1000)
#define HALFSEC (500)
#define BRIGHT  (0.8)
#define DEC     (0.2)

/** variables ********************/
extern TIM_HandleTypeDef timer5;
extern ADC_HandleTypeDef hadc1;
uint16_t adc_val = 0;
uint16_t multiplier;
//definition in header
void ldr_pwm(){
	adc_val = 0;
	uint16_t V_amb;
	//start conversion for reference value
	  HAL_ADC_Start(&hadc1);
	   HAL_ADC_PollForConversion(&hadc1, 1);
	    V_amb = HAL_ADC_GetValue(&hadc1); //getting ref value for light intensity
	      multiplier= COUNTER/V_amb;  //multiplier
	  // Start ADC Conversion
	HAL_ADC_Start(&hadc1);
     // Poll ADC1 Perihperal & TimeOut = 1mSec
   HAL_ADC_PollForConversion(&hadc1, 1);
  // Read the ADC Converted value & Map It To PWM DutyCycle
	adc_val = HAL_ADC_GetValue(&hadc1);
	TIM5->CCR1 = (MAXR-adc_val)*multiplier;
    HAL_Delay(ONESEC);
	  }
//definition in header
void ldr_off(){
	 TIM5->CCR1 =0;
}
//definition in header
void ldr_on(){
	 TIM5->CCR1 =COUNTER;
}
//definition in header
void ldr_sleep(){
 float bright=BRIGHT;
	multiplier = COUNTER;
//gradually decrementing brightness
	  while(bright>=0)
	  {
		   adc_val = HAL_ADC_GetValue(&hadc1);
		        TIM5->CCR1 =(bright*multiplier);
		        HAL_Delay(HALFSEC);
		        bright-=DEC;
}
}

