/* USER CODE BEGIN Header */
/**
 ******************************************************************************
  MAIN function
 *
 * @File name (main.c of ESD PROJECT PROJECT: MOOD BASED AUTOMATION SYSTEM WITH
 * ENERGY OPTIMIZATION)
 * @File Description (-main function)
 * Initializing GPIOs, Timers, UART, I2C , ADC and RTC.UART_RxCpltCallback function is defined hereby for
 * receiving the commands inside the buffer.The mood system functio will handle the commands received from Bluetooth.
 * @Tools used	: STM32F411VET6
 * @Author Name (AYSWARIYA KANNAN & SHRINITHI VENKETESAN)
 * @Date (12/04/2022)
 * 
 *
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "dht11.h"
#include<stdio.h>
#include<string.h>
#include "SSD1306.h"
#include "fonts.h"
#include "FAN_ANIMATION.h"
#include "home_image.h"
#include "ldr.h"
#include "modeimages.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;

I2C_HandleTypeDef hi2c1;

RTC_HandleTypeDef hrtc;

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;
TIM_HandleTypeDef htim5;

UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM1_Init(void);
static void MX_TIM4_Init(void);
static void MX_TIM3_Init(void);
static void MX_TIM2_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_I2C1_Init(void);
static void MX_TIM5_Init(void);
static void MX_ADC1_Init(void);
static void MX_RTC_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
/**Macros DEF*************/

#define N1 (64)
#define N2 (68)
#define N3 (50)
#define N4 (20)
#define N5 (65)
#define N6 (45)
#define N7 (8)
#define N8 (30)
#define N9 (15)
#define N10 (66)
#define N11 (25)
#define N12 (12)
#define N13 (69)

#define FIVESEC (5000)
#define HUNSEC  (100)
#define BUFFERSIZE (60)
#define DEVADDRS (0x0A)
#define RTCTIME (0x500B)


/*** GLOBAL VARIABLES **********************************************************/
int flag=0;
int j,a;
int automode =0;
uint8_t rx;
char str1[BUFFERSIZE]={0};
float PWM1;
/***************************************************************************************/
/*
 * MOOD AUTOMATION function, which decides teh sequence of actions after receving any coomand through bluetooth.The set
 * of commands are: **"systemon" : for Auto mode
 *                  **"systemoff": for turning off all devices
 *                  **"sleep" : for sleep mode : fan speed normal and lights off
 *                  **"day" : for day mode : fan speed at maximum and lights off
 *                  **"work": for work mode : fan speed at high and lights on at maximum intensity
 *                  (ALL modes set with the assumption the climate of the place is warm and sunny during daytime and nominal
 *                  during night)
 *
 * Parameters: char str1[60]: buffer for storing bluetooth commands, which are processed here.
 *             float PWM1   : for controlling manual fan speed
 *
 * Return: NULL
 */
void mood_system(){
	a=0;
	HAL_Delay(N3);
	for(j=0;j<BUFFERSIZE;j++){

		if((str1[j]=='s')  &&  (str1[j+1]=='y')  &&  (str1[j+2]=='s')  &&  (str1[j+3]=='t')  &&  (str1[j+4]=='e') && (str1[j+5]=='m')  &&  (str1[j+6]=='o')  &&  (str1[j+7]=='n')){


			OLED_DrawBitmap(0,0,f1,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f2,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f3,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f4,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f5,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f6,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f7,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f8,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f1,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f2,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f3,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f4,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f5,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f6,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f7,N1,N1,1);
			OLED_UpdateScreen();
			OLED_Clear();
			OLED_DrawBitmap(0,0,f8,N1,N1,1);
			OLED_UpdateScreen();
			OLED_GotoXY (N5,N7); // goto 10, 10
			OLED_Puts ("SYSTEM ON", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen(); // update screen
			OLED_GotoXY (N5,N8); // goto 10, 10
			OLED_Puts ("AUTO MODE", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen();
            HAL_Delay(FIVESEC);
            OLED_Clear();

			fan_control_dht();
			ldr_pwm();
			for(j=0;j<BUFFERSIZE;j++){
				str1[j]=0;}
		}
		automode=1; //setting the auto mode active
	}

	for(j=0;j<BUFFERSIZE;j++){

		if((str1[j]=='s')  &&  (str1[j+1]=='y')  &&  (str1[j+2]=='s')  &&  (str1[j+3]=='t')  &&  (str1[j+4]=='e') && (str1[j+5]=='m')  &&  (str1[j+6]=='o')  &&  (str1[j+7]=='f') && (str1[j+8]=='f')){
			//HAL_Delay(1000);
			// HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,0);
			automode=0;
			__HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_1,0);
			OLED_Clear();
			OLED_GotoXY (N8,N7); // goto 10, 10
			OLED_Puts ("TURNING OFF ", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen(); // update screen
		    OLED_DrawBitmap(N9,N4,off,N1,N3,1);
		    OLED_UpdateScreen();
			ldr_off();

			for(j=0;j<BUFFERSIZE;j++){str1[j]=0;}

		}}
	for(j=0;j<BUFFERSIZE;j++){
		if((str1[j]=='s')  &&  (str1[j+1]=='l')  &&  (str1[j+2]=='e')  &&  (str1[j+3]=='e')  &&  (str1[j+4]=='p')){
			automode=0;
			PWM1 = PWMODE1;
			__HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_1,PWM1*511);
			OLED_Clear();
			OLED_GotoXY (N10,N7); // goto 10, 10
			OLED_Puts ("SLEEP MODE", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen(); // update screen
		    OLED_DrawBitmap(0,N12,zz,N1,N3,1);
			OLED_UpdateScreen();
			OLED_GotoXY (N10,N11); // goto 10, 10
			OLED_Puts ("Fan Normal", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen();
			OLED_GotoXY (N10,N6); // goto 10, 10
			OLED_Puts ("Light OFF", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen();
			ldr_sleep();
			for(j=0;j<BUFFERSIZE;j++){str1[j]=0;}

		}}
	for(j=0;j<BUFFERSIZE;j++){
		if((str1[j]=='d')  &&  (str1[j+1]=='a')  &&  (str1[j+2]=='y')){
			automode=0;
			PWM1 =PWMODE3;
			__HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_1,PWM1*MAXPWM);
			OLED_Clear();
			OLED_GotoXY (N13,N7); // goto 10, 10
			OLED_Puts ("DAY MODE", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen(); // update screen
			OLED_DrawBitmap(0,N12,sun,N1,N3,1);
			OLED_UpdateScreen();
			OLED_GotoXY (N2,N11); // goto 10, 10
			OLED_Puts ("Fan MAX", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen();
			OLED_GotoXY (N2,N6); // goto 10, 10
			OLED_Puts ("Light OFF", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen();
			ldr_off();

			for(j=0;j<BUFFERSIZE;j++){str1[j]=0;}
		}}
	for(j=0;j<BUFFERSIZE;j++){
		if((str1[j]=='w')  &&  (str1[j+1]=='o')  &&  (str1[j+2]=='r')  &&  (str1[j+3]=='k') ){
			automode=0;
			PWM1 = PWMODE2;
			__HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_1,PWM1*MAXPWM);
			OLED_Clear();
			OLED_GotoXY (N13,N7); // goto 10, 10
			OLED_Puts ("WORK MODE", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen(); // update screen
			OLED_DrawBitmap(0,N12,work,N1,N3,1);
			OLED_UpdateScreen();
			OLED_GotoXY (N2,N11); // goto 10, 10
			OLED_Puts ("Fan HIGH", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen();
			OLED_GotoXY (N2,N6); // goto 10, 10
			OLED_Puts ("Light ON", &Font_6x10, 1); // print Hello
			OLED_UpdateScreen();
			ldr_on();

			for(j=0;j<BUFFERSIZE;j++){str1[j]=0;}
		}}
}
/*
 * HAL_UART_RxCpltCallback called when UART interrupt received which will be triggered by bluetooth interface
 * when we send any commands. the command received through rx is stored in char str1[] and flag set to 1, indicating bluetooth
 * command received
 *
 * Parameters: char str1[] to store commands
 *             int flag to indicate bluetooth
 *             uint8_t rx data from UART Rx
 *
 * Return: NULL
 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	//HAL_ResumeTick();
	HAL_PWR_DisableSleepOnExit ();
	if(huart==&huart2)
	{
		if(rx == DEVADDRS){
			flag=1;
		}
		str1[a]=rx;
		a++;
	}
	HAL_UART_Receive_IT(&huart2,&rx,1);
}
/* USER CODE END 0 */

/*
 * Main function: Low power mode :sleep mode is enabled so
 *  **After initializing GPIO,TIMERS, UART,ADC,I2C,RTC and PWM,the system will go back to sleepmode.
 *  **WFI(wakeupfrom interrupt)enabled thus it will resume once any interrupt received.
 *  ** Also RTC enabled to wakeup core every 10 sec(which can be altered according to user)
 *
 * Parameters: int automode :to check if auto mode settings enabled, if enabled it will recollect data
 *             int flag : to know if bluetooth command received or not
 *
 * Return:  returns 1 is successful
 */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM1_Init();
  MX_TIM4_Init();
  MX_TIM3_Init();
  MX_TIM2_Init();
  MX_USART2_UART_Init();
  MX_I2C1_Init();
  MX_TIM5_Init();
  MX_ADC1_Init();
  MX_RTC_Init();
  /* USER CODE BEGIN 2 */
	OLED_Init (); // initialize the display
	OLED_GotoXY (N5,N7); // goto 10, 10
	OLED_Puts ("MOOD", &Font_6x10, 1); // print Hello
	OLED_GotoXY (N5, N4);
	OLED_Puts ("BASED", &Font_6x10, 1);
	OLED_UpdateScreen(); // update screen
	OLED_GotoXY (N5, 35);
	OLED_Puts ("HOME", &Font_6x10, 1);
	OLED_UpdateScreen(); // update screen
	OLED_GotoXY (N5,N3);
	OLED_Puts ("AUTOMATION", &Font_6x10, 1);
	OLED_UpdateScreen(); // update screen
	OLED_DrawBitmap(0,N7,home,N1,N1,1);
	OLED_UpdateScreen(); // update screen
	HAL_Delay(FIVESEC);
	OLED_Clear();

	HAL_UART_Receive_IT(&huart2,&rx,1);
	HAL_TIM_Base_Start_IT(&htim2);

	HAL_TIM_Base_Start(&htim1);
	HAL_TIM_Base_Start(&htim3);
	HAL_TIM_PWM_Start(&htim4,TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_1);


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1)
	{
		if(automode==1){

			fan_control_dht();
			ldr_pwm();}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, 1);

		HAL_SuspendTick();

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, 0);  // Just to indicate that the sleep mode is activated

		HAL_RTCEx_SetWakeUpTimer_IT(&hrtc, RTCTIME, RTC_WAKEUPCLOCK_RTCCLK_DIV16);
		HAL_PWR_EnableSleepOnExit ();

		//	  Enter Sleep Mode , wake up is done once User push-button is pressed
		HAL_PWR_EnterSLEEPMode(PWR_MAINREGULATOR_ON, PWR_SLEEPENTRY_WFI);

		HAL_RTCEx_DeactivateWakeUpTimer(&hrtc);

		SystemClock_Config();

		//	  Resume Tick interrupt if disabled prior to sleep mode entry
		HAL_ResumeTick();

		for (int i=0; i<N4; i++)
		{
			HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);
			HAL_Delay(HUNSEC);
		}

		if(flag==1)
		{
			mood_system();
			flag=0;}

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI|RCC_OSCILLATORTYPE_LSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.LSIState = RCC_LSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 72;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */

  /** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV2;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.ScanConvMode = DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = DISABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
  */
  sConfig.Channel = ADC_CHANNEL_9;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_3CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 400000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief RTC Initialization Function
  * @param None
  * @retval None
  */
static void MX_RTC_Init(void)
{

  /* USER CODE BEGIN RTC_Init 0 */

  /* USER CODE END RTC_Init 0 */

  RTC_TimeTypeDef sTime = {0};
  RTC_DateTypeDef sDate = {0};

  /* USER CODE BEGIN RTC_Init 1 */

  /* USER CODE END RTC_Init 1 */

  /** Initialize RTC Only
  */
  hrtc.Instance = RTC;
  hrtc.Init.HourFormat = RTC_HOURFORMAT_24;
  hrtc.Init.AsynchPrediv = 127;
  hrtc.Init.SynchPrediv = 255;
  hrtc.Init.OutPut = RTC_OUTPUT_DISABLE;
  hrtc.Init.OutPutPolarity = RTC_OUTPUT_POLARITY_HIGH;
  hrtc.Init.OutPutType = RTC_OUTPUT_TYPE_OPENDRAIN;
  if (HAL_RTC_Init(&hrtc) != HAL_OK)
  {
    Error_Handler();
  }

  /* USER CODE BEGIN Check_RTC_BKUP */

  /* USER CODE END Check_RTC_BKUP */

  /** Initialize RTC and set the Time and Date
  */
  sTime.Hours = 0x0;
  sTime.Minutes = 0x0;
  sTime.Seconds = 0x0;
  sTime.DayLightSaving = RTC_DAYLIGHTSAVING_NONE;
  sTime.StoreOperation = RTC_STOREOPERATION_RESET;
  if (HAL_RTC_SetTime(&hrtc, &sTime, RTC_FORMAT_BCD) != HAL_OK)
  {
    Error_Handler();
  }
  sDate.WeekDay = RTC_WEEKDAY_MONDAY;
  sDate.Month = RTC_MONTH_JANUARY;
  sDate.Date = 0x1;
  sDate.Year = 0x0;

  if (HAL_RTC_SetDate(&hrtc, &sDate, RTC_FORMAT_BCD) != HAL_OK)
  {
    Error_Handler();
  }

  /** Enable the WakeUp
  */
  if (HAL_RTCEx_SetWakeUpTimer_IT(&hrtc, 0x500B, RTC_WAKEUPCLOCK_RTCCLK_DIV16) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN RTC_Init 2 */

  /* USER CODE END RTC_Init 2 */

}

/**
  * @brief TIM1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM1_Init(void)
{

  /* USER CODE BEGIN TIM1_Init 0 */

  /* USER CODE END TIM1_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM1_Init 1 */

  /* USER CODE END TIM1_Init 1 */
  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 71;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim1.Init.Period = 65535;
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM1_Init 2 */

  /* USER CODE END TIM1_Init 2 */

}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 8000-1;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 2000;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM3_Init(void)
{

  /* USER CODE BEGIN TIM3_Init 0 */

  /* USER CODE END TIM3_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM3_Init 1 */

  /* USER CODE END TIM3_Init 1 */
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 72;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 65535;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim3) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim3, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM3_Init 2 */

  /* USER CODE END TIM3_Init 2 */

}

/**
  * @brief TIM4 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM4_Init(void)
{

  /* USER CODE BEGIN TIM4_Init 0 */

  /* USER CODE END TIM4_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM4_Init 1 */

  /* USER CODE END TIM4_Init 1 */
  htim4.Instance = TIM4;
  htim4.Init.Prescaler = 71;
  htim4.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim4.Init.Period = 511;
  htim4.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim4.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim4) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim4, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim4) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim4, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim4, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM4_Init 2 */

  /* USER CODE END TIM4_Init 2 */
  HAL_TIM_MspPostInit(&htim4);

}

/**
  * @brief TIM5 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM5_Init(void)
{

  /* USER CODE BEGIN TIM5_Init 0 */

  /* USER CODE END TIM5_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM5_Init 1 */

  /* USER CODE END TIM5_Init 1 */
  htim5.Instance = TIM5;
  htim5.Init.Prescaler = 0;
  htim5.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim5.Init.Period = 65535;
  htim5.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim5.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim5) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim5, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim5) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim5, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim5, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM5_Init 2 */

  /* USER CODE END TIM5_Init 2 */
  HAL_TIM_MspPostInit(&htim5);

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 9600;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_3, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13|GPIO_PIN_14, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);

  /*Configure GPIO pins : PC0 PC1 PC3 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_3;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PD13 PD14 PD15 */
  GPIO_InitStruct.Pin = GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : PB9 */
  GPIO_InitStruct.Pin = GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1)
	{
	}
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
	/* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
