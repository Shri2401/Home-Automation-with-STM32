# Home-Automation-with-STM32
As we deal with the energy crisis in this developing world, it's on every individual to take
responsibility in saving the power starting from their households. Based on approaching
this problem, we have introduced this Mood Based Automation system, a home based
automation system that sets an optimum room setting based on the sensor behavior. This
system interfaces STM32 microcontroller with bluetooth HC05, OLED display, DHT11,
LDR and DC Fan. Based on the temperature configured using DHT11 sensor, the ambient
fan setting is controlled and likewise with using the LDR, the ambient room brightness is
optimized. The bluetooth acts as a remote device in controlling this system manually
according to the user's needs. This system also interfaces a power optimized setting
where the system is made to grab the data every 10s instead of keeping the system
awake the whole time. This helps in energy saving.

## SYSTEM OVERVIEW:</br>

The project is based on a Bluetooth automated controlled system where a user could
control various devices based on his mood using a mobile app. This system has the
following settings:
● Auto settings
● Predefined settings:
▪ Sleep settings
▪ Day-light settings
▪ Work settings
If the user chooses to use the auto settings from the mobile app, it will give all control
to the MCU. It will regulate all devices based on the data collected by various sensors.
For example, using the data like temperature and light intensity, set the device
parameters accordingly. Like if it’s a hot and sunny day, it will increase the fan speed
and dim the light as per the situation. All system changes are displayed through I2C
based OLED.
