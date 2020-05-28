/**********************************************************************
* $Id$		Gpio_LedBlinky.c		2011-06-02
*//**
* @file		Gpio_LedBlinky.c
* @brief	This example describes how to use GPIO interrupt to drive
* 			LEDs
* @version	1.0
* @date		02. June. 2011
* @author	NXP MCU SW Application Team
*
* Copyright(C) 2011, NXP Semiconductor
* All rights reserved.
*
***********************************************************************
* Software that is described herein is for illustrative purposes only
* which provides customers with programming information regarding the
* products. This software is supplied "AS IS" without any warranties.
* NXP Semiconductors assumes no responsibility or liability for the
* use of the software, conveys no license or title under any patent,
* copyright, or mask work right to the product. NXP Semiconductors
* reserves the right to make changes in the software without
* notification. NXP Semiconductors also make no representation or
* warranty that such application will be suitable for the specified
* use without further testing or modification.
**********************************************************************/
#include "lpc177x_8x_gpio.h"
#include "lpc177x_8x_clkpwr.h"
#include "EX_SDRAM/EX_SDRAM.H"
#include "LCD/lpc177x_8x_lcd.h"
#include "LCD/logo.h"
#include "TouchPanel/TouchPanel.h"
#include "UseDisp/Use_Disp.h"
#include "Key/key.h"
#include "stdio.h"
#include "TypeDefine.h"	
#include "test/Test.h"
#include "GlobalValue.h"
#include "lpc177x_8x_rtc.h"
#include "lpc177x_8x_eeprom.h"
#include "usbhost_main.h"
#include "rtc/rtc.h"
#include "lpc177x_8x_gpdma.h"

/** @defgroup GPIO_LedBlinky	GPIO Blinky
 * @ingroup GPIO_Examples
 * @{
 */
/* Private variables ---------------------------------------------------------*/

/************************** PRIVATE DEFINITIONS *************************/

/************************** PRIVATE VARIABLES *************************/
/* SysTick Counter */
volatile unsigned long SysTickCnt;

/************************** PRIVATE FUNCTIONS *************************/
void SysTick_Handler (void);

void Delay (unsigned long tick);

void lcd_test(void);
uint32_t color_table[]={0x000000,0xFFFFFF,0x0000FF,0x00FF00,0xFF0000};

/* Private variables ---------------------------------------------------------*/
extern Matrix matrix ;
extern Coordinate  display ;
void GPIO_IRQHandler()
{
	uint32_t i;
	if(GPIO_GetIntStatus(0, 19, 1))
	{
		 
		for(i=0xffffff;i>0;i--)
		;
		if(softswitch)
		{
			softswitch=0;
			SetSystemStatus(SYS_STATUS_TOOL);
		
		}else
		{
			softswitch=1;
			
			SetSystemStatus(SYS_STATUS_POWER);
		
		}
		GPIO_ClearInt(0, 1<<19);
		NVIC_DisableIRQ(GPIO_IRQn);
	
	}
//	NVIC_ClearPendingIRQ(GPIO_IRQn);
	

}

/*-------------------------MAIN FUNCTION------------------------------*/
/*********************************************************************//**
 * @brief		c_entry: Main program body
 * @param[in]	None
 * @return 		int700097
 **********************************************************************/



int main(void)
    {
	uint32_t  numBlks, blkSize;
	uint8_t  inquiryResult[INQUIRY_LENGTH];
	
//	uint32_t value;
	uint8_t key,rc;
	uint32_t cclk = CLKPWR_GetCLK(CLKPWR_CLKTYPE_CPU);
	uint32_t keynum=0;
//	uint32_t value;
//	uint8_t i;	
	
	/* Generate interrupt each 1 ms   */
	char buff[10];
	SysTick_Config(cclk/1000 - 1); 
	GPIO_IntCmd(0, 1<<19, 1);//p0_19 下降沿中断
	NVIC_SetPriority(GPIO_IRQn, 1);
	NVIC_EnableIRQ(GPIO_IRQn);
	HW_keyInt();
    GPIO_Plc_Configuration();
    debug_frmwrk_init();
	softswitch=0;
	debug_uart3_init(4);//串口3初始化
//	lpc1788_DMA_Init();
	EEPROM_Init();
	
    RTC_INT();
    RE485();
    
//    RTC_CntIncrIntConfig (LPC_RTC, RTC_TIMETYPE_SECOND, ENABLE);
//    NVIC_EnableIRQ(RTC_IRQn);
	HW_keyInt();
	GPIO_Led_Configuration();
//    _printf("\r\n/* * * * * * * * LCD TouchPanel example program * * * * * * * */\r\n");
//    _printf("CoreClock: %d\n",SystemCoreClock);   
    SDRAM_Init();
	/*Disable LCD controller*/
	GLCD_Ctrl (FALSE);

	/*Init LCD and copy picture in video RAM*/
	GLCD_Init (LogoPic.pPicStream, NULL);
   	/*Enable LCD*/
	GLCD_Ctrl (TRUE);
//    touch_init();
//    TouchPanel_Calibrate();
	HW_Sendvalueto164(0);
//	lcd_image((uint8_t *)gImage_open);
//	for(i=0;i<15;i++)
//	{
//		Delay(0xff);
//	}
//	SetSystemStatus(SYS_STATUS_FACRDEBUG);//开机上电状态
//	BUZZER();
	SetSystemStatus(SYS_STATUS_TOOL);//开机上电状态
	
    while(1)
    { 	
		key=HW_KeyScsn();
		if(key==0xff)
		{
			keynum=0;
		}
		else
			keynum++;
		if(keynum==2)
		{
			//Disp_Range_Item();
			//Disp_Range_Count_Item();
			//Disp_List_Count_Item();
			//
			//
			//Disp_Sys_Item();
			 lcd_Clear(LCD_COLOR_TEST_BACK);
//			sprintf(buff,"%2d",key);
//			GUI_Text(120,40,(uint8_t *)buff,White,Black);			
		}
		switch(GetSystemStatus())
		{
			case SYS_STATUS_POWER:
				lcd_Clear(LCD_COLOR_TEST_BACK);
				Power_Process();//开机上电处理
				break;
			case SYS_STATUS_TEST:   //测量显示
                lcd_Clear(LCD_COLOR_TEST_BACK);
				Beep_Off();
				Test_Process();//测试处理
				break;
			case SYS_STATUS_LOAD:   //程控负载显示
				Load_Process();
			break;	
			case SYS_STATUS_POW:   //程控电源显示
				Pow_Process();
			break;
			case SYS_STATUS_LIST:   //列表测试显示
				List_Process();
			break;
			case SYS_STATUS_COMP:   //列表测试显示
				Comp_Process();
			break;
			case SYS_STATUS_FACRDEBUG:	 //公司校正界面
				Fac_DebugProcess();
			break;
			case SYS_STATUS_RANGE:
                lcd_Clear(LCD_COLOR_TEST_BACK);
				Range_Process();//挡号显示
				break;
			case SYS_STATUS_RANGECOUNT: //档计数显示
                lcd_Clear(LCD_COLOR_TEST_BACK);
			    Range_CountProcess();	
				break;
			case SYS_STATUS_ITEM:	 //列表扫描显示
                lcd_Clear(LCD_COLOR_TEST_BACK);
				ItemProcess();
				break;
			case SYS_STATUS_FILE:   //还没有文件管理的子程序
                lcd_Clear(LCD_COLOR_TEST_BACK);
				File_Process();//文件管理
				break;
			case SYS_STATUS_DATASTORE://还没有文件管理的子程序
                lcd_Clear(LCD_COLOR_TEST_BACK);
				Data_StoreProcess();//数据保存
				break;
			case SYS_STATUS_SETUPTEST:	//测量设置
                lcd_Clear(LCD_COLOR_TEST_BACK);
				Setup_Process();//设置处理
				break;
			case SYS_STATUS_USERDEBUG: //用户校正界面
                lcd_Clear(LCD_COLOR_TEST_BACK);
				Use_DebugProcess();
				break;
            case SYS_STATUS_LIMITSET:  //极限扫描设置
                lcd_Clear(LCD_COLOR_TEST_BACK);
                Use_LimitSetProcess();
                break;
            case SYS_STATUS_ITEMSET: //列表扫描设置
                lcd_Clear(LCD_COLOR_TEST_BACK);
                Use_ITEMSetProcess();
                break;
            case SYS_STATUS_SYSSET : //系统设置
                
                Use_SysSetProcess();
                break;
			case SYS_STATUS_TOOL://工具
				Soft_Turnon();
			break;
            //默认设置
            //系统复位
            //文件管理
//
//			case SYS_STATUS_FILE:
////				Disp_Clr( );//清屏
//				File_Process();//文件管理
//			//	=SYS_STATUS_TEST;
//				break;
//
//			case SYS_STATUS_SETUPTEST:
////				Disp_Clr( );//清屏
//				Setup_Process();//设置处理
//				break;
//
//			case SYS_STATUS_TEST:
////				Disp_Clr( );//清屏
//				Test_Process();//测试处理
//		//	Beep_Off();
//				break;
//
//			case SYS_STATUS_DATASTORE:
////				Disp_Clr( );//清屏
//				Data_StoreProcess();//数据保存
//				break;
//
//			case SYS_STATUS_RANGE:
////				Disp_Clr( );//清屏
//				Range_Process();//挡号显示
//				break;
//
//			case SYS_STATUS_RANGECOUNT:
////				Disp_Clr( );//清屏
//			Range_CountProcess();	
////				Debug_Process();//档计数显示
//				break;
//
//			case SYS_STATUS_RESET:
////				Reset_Process();//软件复位处理
//				break;
//			case SYS_STATUS_ITEM:	 //列表显示
//				ItemProcess();
//				break;
//			case SYS_STATUS_USERDEBUG: //用户校正界面
//				Use_DebugProcess();
//				break;
			
			default:
//				Disp_Clr( );//清屏
//				Error_Process();//错误处理
				break;
		}

    }
}


/*----------------- INTERRUPT SERVICE ROUTINES --------------------------*/
/*********************************************************************//**
 * @brief		SysTick handler sub-routine (1ms)
 * @param[in]	None
 * @return 		None
 **********************************************************************/

void SysTick_Handler (void)
{
	SysTickCnt++;
}

/*-------------------------PRIVATE FUNCTIONS------------------------------*/
/*********************************************************************//**
 * @brief		Delay function
 * @param[in]	tick - number milisecond of delay time
 * @return 		None
 **********************************************************************/
void Delay (unsigned long tick)
{
	unsigned long systickcnt;

	systickcnt = SysTickCnt;
	while ((SysTickCnt - systickcnt) < tick);
}


/*****************************************************************************
**                            End Of File
******************************************************************************/

