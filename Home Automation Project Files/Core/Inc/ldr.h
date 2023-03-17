/*
 * @File name (ldr.h)
 * @File Description ( Header file of ldr
 * initializing ADC conversion of analog value of voltage collected from the voltage divider circuit of LDR
 * Calculating the PWM value according to the analog value and required light intensity)
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @Attributions :
 *
 */
#ifndef INC_LDR_H_
#define INC_LDR_H_


/*
 * function for ADC conversion of analog value of voltage collected from the voltage divider circuit of LDR
 *
 * Parameters: uint16_t V_amb : for getting the ambient value for reference
 *             uint16_t multiplier: mutiplier calculated with reference to max voltage drop and V_amb to be multiplied
 *                                  to get desired PWM value for light intensity
 *             uint16_t adc_val : ADC value for deciding the light intensity

 *
 * Return: NULL
 */
void ldr_pwm();

/*
 * function for light intensity during "SLEEP" mode. Light intensity gradually decreases to off condition
 *
 * Parameters:  float bright: for decreasing light intensity
 * Return: NULL
 */
void ldr_sleep();

/*
 * function for light intensity during "SYSTEMOFF" command.
 *
 * Parameters:  NULL
 * Return: NULL
 */
void ldr_off();
/*
 * function for light intensity during "WORK" mode. Light intensity is of full brightness.
 *
 * Parameters:  NULL
 * Return: NULL
 */
void ldr_on();

#endif /* INC_LDR_H_ */
