//==========================================================
//文件名称：GlobalValue.c
//文件描述：全局变量定义
//文件版本：Ver1.0
//创建日期：2015.10.28
//修改日期：2015.10.28 15:38
//文件作者：黄宏灵
//备注说明：无
//注意事项：无
//==========================================================
#include "TypeDefine.h"	//数值类型
//#include "Beep.h"
//#include "core_cm3.h"
#include "Globalvalue/GlobalValue.h"

//==========================================================
//全局变量

SaveData_Typedef SaveData;
SaveSet SaveSIM;
Saveeeprom_Typedef	Saveeeprom;
Test_Dispvalue_TypeDef Test_Dispvalue; 
Send_Mainord_Typedef Send_Mainord;
Comp_Testvalue_Typedef  Comp_Testvalue;
All_Compvalue_Typedef Comp_Change;
uint8_t usb_oenflag;
uint8_t Debug_over;
uint8_t Comp_flag;
uint8_t debug_over;
uint8_t Rtc_intflag;
uint8_t mainswitch;
uint8_t Irange = 0;
uint8_t overflag = 0;
int32_t V_CS,I_CS;
uint8_t Mode;
uint8_t LM_S;
uint8_t busyflag;
uint8_t ptflag;
uint16_t I_ADC,V_ADC;
struct MODS_T g_tModS;
uint8_t g_mods_timeout;

uint8_t LOW_I,H_L,SWITCH_A; 

float LVL_DA;

//uint32_t MenuIndex;//待机菜单项
//uint32_t MenuSelect;//菜单选择项
//
//uint32_t SystemStatus;//系统状态
//uint32_t SystemMessage;//系统信息
// Save_TypeDef SaveData;//保存值
// Cal_TypeDef Cal[6];//校准值
//
// NumBox_TypeDef NumBox;//数值框
// Res_TypeDef	Res;
// bool F_Fail;//测试失败标志
// bool F_100ms;//100ms定时标志
// bool F_Password;//密码有效标志
//
// uint8_t Range;//当前量程
//
uint8_t softswitch;
uint8_t temperature;
uint8_t sendflag = 0;
uint8_t Uart_Send_Flag;
unsigned long Count_buff[12];
unsigned long MenuIndex;//待机菜单项
unsigned long MenuSelect;//菜单选择项
//
 unsigned long SystemStatus;//系统状态
unsigned long SystemMessage;//系统信息
Disp_Coordinates_Typedef Disp_Coordinates;
uint8_t DispBuf[12];
uint8_t Usb_Open_flag;

//
// uint16_t Voltage;//电压
// uint16_t Current;//电流
// uint16_t Resistance,xxxx;//电阻
//uint16_t i_buff[FIT_INUM];		   //滤波值
//uint8_t	count_ffit;
//u16 	zreo_num[6];
//uint8_t ffit_data1;
//u8 fuhao;
//bool clear_flag;
//bool vol_flag;
//==========================================================
//函数名称：InitGlobalValue
//函数功能：初始化全局变量
//入口参数：无
//出口参数：无
//创建日期：2015.10.28
//修改日期：2015.10.28 15:33
//备注说明：无
//==========================================================
void InitGlobalValue(void)
{
	uint16_t len;
	uint8_t * buf;
						 
	buf=(uint8_t *)&SaveData;//数据首地址
	len=sizeof(SaveData_Typedef);
	while(len--)
	{
		*buf=0;//清空
		buf++;
	}
	buf=(uint8_t *)&SaveData.Limit_ScanValue;//列表扫描初始化
	len=sizeof(SaveData.Limit_ScanValue);
	while(len--)
	{
		*buf=0xff;//清空
		buf++;
	}
	SaveData.Limit_ScanValue.fun=0;
	//F_Password=FALSE;//密码有效标志	
}

////==========================================================
////函数名称：LoadDefaultSet
////函数功能：加载默认设置值
////入口参数：无
////出口参数：无
////创建日期：2015.10.28
////修改日期：2015.10.28 15:33
////备注说明：无
////==========================================================
//void LoadDefaultSet(void)
//{
//	LoadDefaultParameter();//加载默认参数
//	SaveParameter();//保存设置数据
//	
//	LoadDefaultSystem();//加载默认系统值
//	SaveSystem();//保存系统参数
//	
//	LoadDefaultConfig();//加载默认配置值
//	SaveConfig();//保存配置值
//}

////==========================================================
////默认参数设置数据
//const uint8_t DefaultParameter[]=
//{
//	0,	//量程-自动
//	0,	//讯响-关闭
//	0,	//清零-关闭
//	0,	//外触发-关闭
//	0,	//串口-关闭
//};

////测试底数
//const s16 BASE_NUM[6]=
//{	
//	100,//1300,
//	0,//170,
//	0,//20,
//	0,//10,
//	0
//};
////测试电阻小数点位置
//const u8 DOT_POS[6]=
//{	
//	2,
//	1,
//	3,
//	2,
//	0
//};
////==========================================================
////加载默认参数
////==========================================================
//void LoadDefaultParameter(void)
//{
//	u8 i;
//	u8 *pt,*pt2;

//	pt =(u8*)&(SaveData.Parameter);
//	pt2=(u8*)&(DefaultParameter);
//	for(i=0;i<sizeof(DefaultParameter);i++)
//	{
//		*pt++=*pt2++;
//	}
//}
////==========================================================
////默认系统设置数据
//const u8 DefaultSystem[]=
//{
//	0,200,1,0,	//电阻上限-020.0m
//	0,100,2,0,	//电阻下限-01.00m
//};
////==========================================================
////加载默认系统值
////==========================================================
//void LoadDefaultSystem(void)
//{
//	u8 i;
//	uint8_t *pt;

//	pt =(uint8_t*)&(SaveData.System);
//	for(i=0;i<sizeof(DefaultSystem);i++)
//	{
//		*pt++=DefaultSystem[i];
//	}
//}

////==========================================================
////加载默认配置值
////==========================================================
//void LoadDefaultConfig(void)
//{
//	SaveData.Config.Password=DEFAULT_PASSWORD;//设置密码
//	SaveData.Config.BootNum=SET_BOOT_DEFAULT;//开机次数
//	SaveData.Config.ProductId=DEFAULT_MACHINE_ID;//出厂编号
//}

////==========================================================
////默认校准数据
//const uint16_t DefaultCalibrate[][2]=
//{
//	 1000, 1000, 
//	 1000, 1000, 
//	 5000, 3200, 
//	 5000, 3200, 
//	 5000, 3200, 
//	 5000, 3200,
//};
////==========================================================
////校准值上、下限
//const u16 CalibrateLimit[][2]=
//{
//	 1300, 800,
//	 1300, 800, 
//	 1300, 800, 
//	 1300, 800, 
//	 3200,2800, 
//	 3200,2800, 
//};

////==========================================================
////加载默认校准值
////==========================================================
//void LoadDefaultCalibrate(void)
//{
//	u8 i;
//	u8 *pt,*pt2;

//	pt =(u8*)&(SaveData.Calibrate);
//	pt2=(u8*)&(DefaultCalibrate);
//	for(i=0;i<sizeof(DefaultCalibrate);i++)
//	{
//		*pt++=*pt2++;
//	}
//	SaveCalibrate();//保存校准值
//}

////==========================================================
////函数名称：Check_Calibrate_Limit
////函数功能：校准值检查
////入口参数：无
////出口参数：无
////创建日期：2015.10.28
////修改日期：2015.10.28 15:38
////备注说明：上、下限检查,	L<=x<=H
////==========================================================
//void Check_Calibrate_Limit(void)
//{
////	u8 i;
//	u8 j;
//	uint16_t *pt;

//	pt=(uint16_t *)&SaveData.Calibrate;
//	j=sizeof(CalibrateLimit)/sizeof(CalibrateLimit[0]);
////	for(i=0;i<j;i++)//共j项
////	{
////		NumBox.Max=CalibrateLimit[i][0];//Max
////		NumBox.Min=CalibrateLimit[i][1];//Min
////		if(*pt > NumBox.Max)
////			*pt=NumBox.Max;
////		if(*pt < NumBox.Min)
////			*pt=NumBox.Min;
////		pt++;
////	}
//}

////==========================================================
////函数名称：ReadSaveData
////函数功能：读取保存参数
////入口参数：无
////出口参数：无
////创建日期：2015.10.28
////修改日期：2015.10.28 15:38
////备注说明：无
////==========================================================
//void ReadSaveData(void)
//{
//#if DEBUG_SUPPORT
//	LoadDefaultSet();//调用默认设置值
//	LoadDefaultCalibrate();//加载默认校准值
//#else
//	ReadParameter();//读取设置参数
//	ReadSystem();//读取系统参数
//	ReadConfig();//读取配置信息
//	ReadCalibrate();//读取校准值
//#endif
//	
//	//更新当前量程
//	if(SaveData.Parameter.Range==0)//量程自动
//		Range=0;
//	else
//		Range=SaveData.Parameter.Range-1;//偏移量1

//}

//==========================================================
//END
//==========================================================

