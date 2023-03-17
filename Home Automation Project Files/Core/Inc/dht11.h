/*
 * @File name (dht11.h)
 * @File Description (
 * initializing DHT11 digital humidity and temporature sensor for regulating the device parameters
 * when the mode is in AUTOMODE
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * @Attributions :https://www.micropeta.com/video39
 *
 */
#ifndef INC_DHT11_H_
#define INC_DHT11_H_
#define PWMODE1 (0.5) //FOR Pulse width modulation
#define PWMODE2 (0.7)
#define PWMODE3 (1)
#define MAXPWM (511)
/*
 * function for controlling fan according to temperature reading
 *
 * Parameters:uint8_t TC_Int, TC_Dec to get temperatureintegral and decimal   data;
 *            uint8_t RH_Int, RH_Dec to get relative humidity integral and decimal  data
 *            uint8_t check_sum to check if correct data transimitted
 *            float Celsius,Rel_Hum  to get the combined dec and integral adat
 * Return: NULL
 */
void fan_control_dht();


#endif /* INC_DHT11_H_ */
