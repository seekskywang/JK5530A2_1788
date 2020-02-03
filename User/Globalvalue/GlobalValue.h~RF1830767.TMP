//==========================================================
//文件名称：GlobalValue.h
//文件描述：全局变量头文件
//文件版本：Ver1.0
//创建日期：2015.10.26 
//修改日期：2015.10.28 15:38
//文件作者：黄宏灵
//备注说明：无
//注意事项：无
//==========================================================
#ifndef __GlobalValue_h__
#define __GlobalValue_h__
#include "stdint.h"
//#include "TypeDefine.h"
#define FIT_INUM    12
//==========================================================
//软件版本：10
#define SOFTWARE_VERSION		(0x10)

//==========================================================
//默认出厂编号(0)
#define DEFAULT_MACHINE_ID 		(0)

//默认出厂密码(0)
#define DEFAULT_PASSWORD 		(0)

//默认开机次数(0)
#define SET_BOOT_DEFAULT		(0)

//==========================================================
//调试配置
#define _DEBUG_CONFIG_FALSE		(0)
#define _DEBUG_CONFIG_TRUE		(1)

//==========================================================
//仿真调试
//#define DEBUG_SUPPORT			(_DEBUG_CONFIG_TRUE)
#define DEBUG_SUPPORT			(_DEBUG_CONFIG_FALSE)

//==========================================================
//ISP开关配置，仿真调试用
#if DEBUG_SUPPORT
	#define HW_ISP_SUPPORT		(_DEBUG_CONFIG_FALSE)
#else
	#define HW_ISP_SUPPORT		(_DEBUG_CONFIG_TRUE)
#endif

//==========================================================
//Uart开关配置
#define HW_UART_SUPPORT			(_DEBUG_CONFIG_TRUE)

//==========================================================
//蜂鸣器开关配置
#define HW_BEEP_SUPPORT			(_DEBUG_CONFIG_TRUE)
//==========================================================
//功能配置
//#define DISP_JK                 (0)
//==========================================================
//AD值滤波配置，增加数据稳定度
#define AD_FILTER_SUPPORT		(_DEBUG_CONFIG_TRUE)

//==========================================================
#define SETUP_MENU_MAX  	(2)//最大设置菜单

#define DEBUG_MENU_MAX  	(6)//最大校准菜单

#define PARAMETER_MENU_MAX	(3)//最大参数菜单

#define SYSTEM_MENU_MAX		(4)//最大系统菜单

#define CONFIG_MENU_MAX		(3)//最大配置项(0-2)

#define PW_LENGTH 			(4)//最大密码位数

#define RANGE_MAX 			(4-1)//最大量程

#define AD_BUF_LENGTH		(8)//A/D值缓冲区长度

#define MAX_R_RANGE			(5)//电阻最大量程

#define BUTTOM_X_VALUE		(84)//显示下面提示显示的第一个X位置

#define BUTTOM_MID_VALUE	(80)//显示下面提示显示的中间间隔位置

#define BUTTOM_Y_VALUE		(271-30)//显示下面提示显示的第一个Y位置

#define KEY_NUM				(2)	//按键灵敏度

#define NUM_LENTH 			(6)//显示长度
#define NUM_FREQ 			(33+4)//显示长度		

#define PASSWORD_LENTH      (8)//密码长度

//==========================================================
#define OHM 				(0xF4)	//CGROM中有Ω字符，编码为0xF4


//==========================================================

#define S_RX_BUF_SIZE		30
#define S_TX_BUF_SIZE		128

#define RSP_OK				0		/* ?? */
#define RSP_ERR_CMD			0x01	/* ??????? */
#define RSP_ERR_REG_ADDR	0x02	/* ??????? */
#define RSP_ERR_VALUE		0x03	/* ?????? */
#define RSP_ERR_WRITE		0x04	/* д??? */

#define SLAVE_REG_P00		0x1000       //R_VOLU
#define SLAVE_REG_P01		0x1001      //Load_Voltage
#define SLAVE_REG_P02		0x1002      //Load_Current
#define SLAVE_REG_P03		0x1003		//Change_Voltage
#define SLAVE_REG_P04		0x1004		//Change_Current
#define SLAVE_REG_P05		0x1005		//Load_OCP
#define SLAVE_REG_P06		0x1006		//Change_OCP
#define SLAVE_REG_P07		0x1007		//Short_Time
#define SLAVE_REG_P08		0x1008		//Leak_Current
#define SLAVE_REG_P09		0x1009		//R1_Volu
#define SLAVE_REG_P10		0x100A		//R2_Volu
#define SLAVE_REG_P11		0x100B		//Temper
#define SLAVE_REG_P12		0x100C		//DHQ_Voltage
#define SLAVE_REG_P13		0x100D		//MODE
#define SLAVE_REG_P14		0x100E		//Load_Mode
#define SLAVE_REG_P15		0x100F		//Load_SET_Voltage
#define SLAVE_REG_P16		0x1010		//Load_SET_Current
#define SLAVE_REG_P17		0x1011		//Change_SET_Voltage
#define SLAVE_REG_P18		0x1012		//Change_SET_Current

#define WRITE_REG_P00		0x2000       //R_VOLU
#define WRITE_REG_P01		0x2001      //Load_Voltage
#define WRITE_REG_P02		0x2002      //Load_Current
#define WRITE_REG_P03		0x2003		//Change_Voltage
#define WRITE_REG_P04		0x2004		//Change_Current
#define WRITE_REG_P05		0x2005		//Load_OCP
#define WRITE_REG_P06		0x3000		//Change_OCP


#define WRITE_REG_P07		0x1007		//Short_Time
#define WRITE_REG_P08		0x1008		//Leak_Current
#define WRITE_REG_P09		0x1009		//R1_Volu
#define WRITE_REG_P10		0x100A		//R2_Volu
#define WRITE_REG_P11		0x100B		//Temper
#define WRITE_REG_P12		0x100C		//DHQ_Voltage
#define WRITE_REG_P13		0x100D		//MODE
#define WRITE_REG_P14		0x100E		//Load_Mode
#define WRITE_REG_P15		0x100F		//Load_SET_Voltage
#define WRITE_REG_P16		0x1010		//Load_SET_Current
#define WRITE_REG_P17		0x1011		//Change_SET_Voltage
#define WRITE_REG_P18		0x1012		//Change_SET_Current

//显示分区的X坐标
#define MSG_ADDR_X 			(1)
#define AUTO_ADDR_X 		(12)
#define RANGE_ADDR_X 		(17)

#define RES_ADDR_X 			(1)
#define VOL_ADDR_X 			(12)

#define DISP_UNIT_XPOS	370-8-30
#define DISP_UNIT_YPOS	92
//==========================================================
//标题长度
#define TITLE_LEN_MAX		(8)
#define  FILENAME_R  "MSREAD.TXT"
#ifdef DISP_JK
    #define  FILENAME_W  "JK2817N.TXT"
#else
    #define FILENAME_W  "2817N.TXT"
#endif
extern uint8_t Comp_flag;
extern uint8_t Debug_over;
extern uint8_t mainswitch;
extern uint8_t Irange;
extern uint8_t overflag;
extern uint8_t busyflag;
extern uint8_t ptflag;
extern struct MODS_T g_tModS;
extern uint8_t g_mods_timeout;
//数值框属性定义
//typedef struct
//{
//	uint8_t *Title;//标题
//	uint16_t Num;//数值
//	uint8_t  Dot;//小数点(0-3: xxxx xxx.x xx.xx x.xxx)
//	uint8_t  Unit;//单位(0-1: mOhm、Ohm)
//	uint16_t Max;//最大值
//	uint16_t Min;//最小值
//}NumBox_TypeDef;

struct MODS_T
{
	uint8_t RxBuf[S_RX_BUF_SIZE];
	uint8_t TxBuf[S_TX_BUF_SIZE];
	uint8_t RxCount;
	uint8_t RxStatus;
	uint8_t RxNewFlag;
	uint8_t RspCode;
	
	uint8_t TxCount;
};

typedef struct
{
	float first_value;
	float second_value;
	float third_value;
	float fourth_value;
	float comp_highvalue[10];
	float comp_lowvalue[10];
	


}Comp_Testvalue_Typedef;
extern Comp_Testvalue_Typedef  Comp_Testvalue;
//typedef struct
//{
//	uint8_t  buff[5];
//	uint8_t dot;
//	uint8_t unit;


//}
typedef struct
{
	uint8_t Main_Funbuff[8];
	uint8_t Main_Secondbuff[8];
	uint8_t Main_Vmbuff[8];
	uint8_t Main_Imbuff[8];


}Test_DispBCD_Typedef;
typedef struct
{
	uint8_t Main_flag;
	uint8_t Second_falg;

}Main_Second_TypeDed;
//带小数点和单位的数
typedef struct 
{
	uint8_t sign;
	uint32_t Num;
	uint32_t Dot;
	uint32_t Unit;
	uint32_t Updata_flag;
	uint32_t Order;
}Sort_TypeDef;
typedef struct
{
	uint8_t buff[5];
	uint32_t Num;
	uint32_t Dot;
	uint32_t Unit;


}Range_Set_Typedef;
typedef struct
{
	Range_Set_Typedef all[4];

}All_Compvalue_Typedef;
extern All_Compvalue_Typedef Comp_Change;
typedef struct
{
	uint32_t test;
	uint32_t page;

}Param_Typedef;
//==========================================================
typedef struct
{
	uint32_t Auto;
	uint32_t Range;

}AotoRange_Typedef;
//参数项(20项)测量设置
typedef struct 
{
	Param_Typedef Param;//功能(有列表)
	uint32_t Freq;//频率(有列表)
	uint32_t Level;//电平(1V  0.3V)
	uint32_t Trig;//外部触发开关(0-3，内部 手动 外部 总线)
//	uint32_t Alc;//恒电平(0-1，默认关0)
	uint32_t Rsou;//内阻(0-1，默认关0)
    Sort_TypeDef Trig_time;
//    Sort_TypeDef Temp_time;
    uint32_t Dev_a;
    uint32_t Dev_b;
    AotoRange_Typedef Range;
//    uint32_t Bias;
    uint32_t Speed;
    uint32_t Avg;
    uint32_t V_i;
//    uint32_t Dcr;
//    AotoRange_Typedef DC_Range;
//    uint32_t DC_Level;
    Sort_TypeDef Ref_A; 
    Sort_TypeDef Ref_B;
	uint32_t beep;
	uint32_t buad;
//	uint8_t  Count;
}Main_Func_TypeDef;
typedef struct
{
	uint8_t param;
	uint8_t freq;
	uint8_t level;
	uint8_t trig;
	uint8_t rsou;
	
	uint8_t range;
	uint8_t bisa;
	uint8_t speed;
	uint8_t avg;
	uint8_t v_i;
	uint8_t beep;
	uint8_t buad;
	Sort_TypeDef Trig_time;
    Sort_TypeDef Temp_time;
	uint8_t language;	
	

}Save_Main_Funce_Typedef;
typedef struct
{
	Sort_TypeDef Mainvalue;
	Sort_TypeDef Secondvalue;
	Sort_TypeDef Vmvalue;
	Sort_TypeDef Imvalue;
	Sort_TypeDef Pvalue;
	uint8_t Rangedisp;
	uint8_t Main_valuebuff[10];
	uint8_t Secondvaluebuff[10];
	uint8_t Vmvaluebuff[10];
	uint8_t Imvaluebuff[10];
	uint8_t Dot[4];
	uint8_t Unit[4];
	


}Test_Dispvalue_TypeDef;
extern Test_Dispvalue_TypeDef Test_Dispvalue; 
typedef struct
{
    uint32_t Open;//开路
    uint32_t Short;//短路
    uint32_t Load;//负载
    uint32_t Spot;//校正点
    uint32_t Freq;//频率
    Sort_TypeDef Ref_A;
    Sort_TypeDef Open_A;
    Sort_TypeDef Short_A;
    Sort_TypeDef Load_A;
    uint32_t Cable;//电缆长度
    uint32_t Mode;//方式
    uint32_t Param;//功能
    Sort_TypeDef Ref_B;
    Sort_TypeDef Open_B;
    Sort_TypeDef Short_B;
    Sort_TypeDef Load_B;

}User_Correction_Typedef;
typedef struct
{
    Sort_TypeDef low;
    Sort_TypeDef high;

}Comp_Value_Typedef;
//极限列表设置
typedef struct
{
    uint32_t Param;//参数
    Sort_TypeDef Nom;//标称
    uint32_t Mode;//方式
    uint32_t Aux;//附属
    uint32_t Comp;//比较开关
    Comp_Value_Typedef Comp_Value[10];
    Comp_Value_Typedef Comp_Value_2nd;
	uint32_t count;
}Limit_Tab_Typedef;

typedef struct
{
    uint32_t Value;
    uint32_t Unit; 
} Sweep_Value_Typedef;
typedef struct
{
    uint32_t Freq;
    uint32_t Level;
    uint32_t Lmt;
    Sweep_Value_Typedef Low;
    Sweep_Value_Typedef High;
    Sweep_Value_Typedef Delay_Time;

}List_Value_Typedef;
//列表扫描设置
typedef struct
{
    uint32_t mode;
    List_Value_Typedef  List_Value[200];


} List_Sweep_Typedef;
typedef struct
{
	uint32_t Year;
	uint32_t Mon;
	uint32_t data;

}Data_Value_Typedef;
typedef struct
{
	uint32_t Hour;
	uint32_t Min;
	uint32_t Sec;

}Timer_Value_Typedef;
//系统设置
typedef struct
{
    uint32_t Main_Func;
    uint32_t Pass_Beep;
    uint32_t Fail_Beep;
    uint32_t Language;
    uint32_t Password;
    uint32_t Menu_Disp;
	Data_Value_Typedef Data_Value;
	Timer_Value_Typedef Timer_Value;
	uint32_t Cipher;	//密码
    uint32_t Baue_Rate;
	
    uint32_t Bias;
    uint32_t Bus_Mode;
    uint32_t GP_Addr;
    uint32_t Talk_Only;
}Sys_Setup_Typedef;

typedef struct
{
	uint8_t fun;
	uint8_t num;
	uint8_t freq[210];
	uint8_t ac_leave[210];
	Range_Set_Typedef Range_Set_main[210];
	Range_Set_Typedef Range_Sed_Second[210];
	uint8_t comp[210];
	Sort_TypeDef time[210];
	uint8_t xpos;
	uint8_t ypos;

}Limit_ScanValue_Typedef;

typedef struct
{
	uint16_t setvoltage;
	uint16_t setcurrent;

}Set_Bat_Value_Typedef;

typedef struct
{
	
	User_Correction_Typedef		User_Correction;
	Limit_Tab_Typedef	Limit_Tab;
	List_Value_Typedef	List_Value;
	Sys_Setup_Typedef	Sys_Setup;
	Main_Func_TypeDef	Main_Func;
	Limit_ScanValue_Typedef Limit_ScanValue;
	Set_Bat_Value_Typedef Set_Bat;
    
}SaveData_Typedef;

typedef struct 
{
	uint32_t Num;
	uint32_t Dot;
	uint32_t Unit;
}SetNum_TypeDef;

typedef struct
{	
	Sort_TypeDef Voltage;//电压
	Sort_TypeDef ChargePC;//充电保护电流
	Sort_TypeDef LoadPC;//放电保护电流
    Sort_TypeDef QuickV[6];//快捷电压值
	Sort_TypeDef ChargePT;//充电保护时间
	Sort_TypeDef LoadPT;//放电保护时间
	uint8_t qvflag;//快捷电压选项
	Sort_TypeDef CALV[4];//测量电压校准
	Sort_TypeDef CTRLV[4];//控制电压校准
	Sort_TypeDef CALI[6];//测量电流校准
}SaveSet;
extern SaveSet SaveSIM;
extern SaveData_Typedef SaveData;
typedef struct
{
    uint8_t buard;
    uint8_t key_board;
    uint8_t U_flag;
    
}Sys_Typedef;
typedef struct
{
	Save_Main_Funce_Typedef	Save_Main_Funce;
	Limit_Tab_Typedef	Limit_Tab;
    Sys_Typedef Sys_set;
    uint8_t fac_num[10];

}Saveeeprom_Typedef;
extern Saveeeprom_Typedef	Saveeeprom;

typedef struct
{
	uint8_t index;
	uint8_t page;
	uint8_t third;
	uint8_t  force;

}Button_Page_Typedef;
typedef struct
{
	uint16_t xpos;
	uint16_t ypos;
	uint16_t lenth;


}Disp_Coordinates_Typedef;
typedef struct
{
	uint8_t Ordel;
	uint8_t name;

} Send_Ord_Typedef;
typedef struct
{
	Send_Ord_Typedef first;
	Send_Ord_Typedef second;
	Send_Ord_Typedef third;

}Send_Mainord_Typedef;
extern Send_Mainord_Typedef Send_Mainord;
extern uint8_t usb_oenflag;
extern uint8_t softswitch;
//extern Disp_Coordinates_Typedef Disp_Coordinates;
//==========================================================
//系统项(2项)
//typedef struct 
//{
//	Sort_TypeDef Res_Hi;//上限(xxxx mΩ)
//	Sort_TypeDef Res_Lo;//下限(xxxx mΩ)
//	Sort_TypeDef Vol_Hi;//上限(xxxx V)
//	Sort_TypeDef Vol_Lo;//下限(xxxx V)
//}System_TypeDef;

//==========================================================
//配置项(3项)
//typedef struct 
//{
//	uint16_t Password;//设置密码(0-9999，默认0)
//	uint16_t BootNum;//开机次数(0-9999，默认0)
//	uint16_t ProductId;//出厂编号(0-9999，默认0)
//}Config_TypeDef;

//==========================================================
//校正值
//typedef struct 
//{
//	uint16_t Num;  //显示值
//	uint16_t NumAd;//A/D值
//}Cal_TypeDef;

////校正项
//typedef struct 
//{
//	Cal_TypeDef IrCur[4];//绝缘电阻电流值-4档
//	Cal_TypeDef IrVol[2];//绝缘电阻电压值-2档
//	
//}Calibrate_TypeDef;
//typedef struct 
//{
//	uint16_t Real;  //实数
//	uint16_t Imaginary;//虚数
//	uint16_t DC_voltage;
//	uint8_t	 Dot;
//	uint8_t	 Negative;
//}Res_TypeDef;
//==========================================================
//保存信息
//typedef struct 
//{
//	Parameter_TypeDef Parameter;//参数项
//	System_TypeDef System;//系统项
//	Config_TypeDef Config;//配置项
//	Calibrate_TypeDef Calibrate;//校准项
//	uint16_t Crc16;//校验字
//}Save_TypeDef;
//
////==========================================================
////默认校准值上下限
//extern const u16 CalibrateLimit[][2];
//extern const s16 BASE_NUM[6];
//extern const u8 DOT_POS[6];

//==========================================================
//全局变量
//extern  Save_TypeDef SaveData;//保存值
//extern  Cal_TypeDef Cal[6];//校准值
//extern  Res_TypeDef	Res;
//extern  uint8_t Range;//当前量程
//extern  bool F_Password;//密码有效标志
//extern  bool F_100ms;//100ms定时标志
//extern  bool F_Fail;//测试失败标志
//extern  uint8_t MenuIndex;//待机菜单项
//extern  uint8_t MenuSelect;//菜单选择项
extern  unsigned long SystemStatus;//系统状态
extern unsigned long SystemMessage;//系统信息
extern uint8_t DispBuf[12];
extern uint8_t Rtc_intflag;
extern unsigned long Count_buff[12];
extern uint8_t Uart_Send_Flag;
extern uint8_t Usb_Open_flag;
extern uint8_t debug_over;
extern uint8_t temperature;
extern uint8_t sendflag;
//参数
extern int32_t V_CS,I_CS;
extern uint8_t Mode, LM_S;
extern uint16_t I_ADC,V_ADC;
extern uint8_t LOW_I,H_L,SWITCH_A; 
extern float LVL_DA;
//extern  uint16_t Voltage;//测试电压
//extern  uint16_t Current;//测试电流
//extern  uint16_t Resistance,xxxx;//测试电阻
//extern  NumBox_TypeDef NumBox;//数值框
//extern uint16_t i_buff[FIT_INUM];		   //滤波值
//extern uint8_t ffit_data1;
//extern	uint8_t	count_ffit;
//extern 	u16 	zreo_num[6];
//extern u8 fuhao;
//extern bool clear_flag;
//extern bool vol_flag;
//extern u32 MenuIndex;//待机菜单项
//extern u32 MenuSelect;//菜单选择项
//
//extern u32 SystemStatus;//系统状态
//extern u32 SystemMessage;//系统信息

//==========================================================
//系统状态
enum SysStatusEnum
{	
	SYS_STATUS_ERROR ,			//异常
	SYS_STATUS_RESET ,			//复位
	SYS_STATUS_POWER ,			//开机
//	SYS_STATUS_POWER ,
	SYS_STATUS_DATASTORE ,		//数据保存
	SYS_STATUS_FILE ,			//文件管理
	SYS_STATUS_SETUPTEST ,			//测量设置
	SYS_STATUS_TEST ,			//测试
	SYS_STATUS_RANGE ,		//档号显示
	SYS_STATUS_RANGECOUNT,	//档计数显示
	SYS_STATUS_ITEM ,			//列表扫描显示
	SYS_STATUS_USERDEBUG,//用户校正 
	SYS_STATUS_FACRDEBUG, //工厂校正
	SYS_STATUS_SYSSET,     //系统设置
    SYS_STATUS_LIMITSET,     //极限设置
    SYS_STATUS_ITEMSET,//列表扫描设置
	SYS_STATUS_TOOL,//工具
};
//==========================================================
//分选状态
enum SlectStatusEnum
{
	RH_FAIL,
	RL_FAIL,
	VH_FAIL,
	VL_FAIL,
	ALL_FAIL,
	ALL_PASS,
	


};
//==========================================================
//系统消息
enum SysMessageEnum
{
	MSG_CLEAR , 
	MSG_IDLE , 
	MSG_TEST , 
	MSG_ABORT , 
	MSG_PASS ,
//	MSG_FAIL ,
	MSG_HIGH , 
	MSG_LOW , 
};

//==========================================================
//最大AD值
#define AD_MAX (3000) //12bit=4096-1
////最大电压AD值
//#define VOL_AD_MAX (AD_MAX-100)
////最大电流AD值
//#define CUR_AD_MAX (AD_MAX-100)

//量程上下限
#define RANGR_LIMIT_HIGH (3000)
#define RANGR_LIMIT_LOW  (190)

//==========================================================
//函数列表
void InitGlobalValue(void);//全局变量初始化
void LoadDefaultSet(void);//加载默认设置值
void LoadDefaultParameter(void);//加载默认参数值
void LoadDefaultSystem(void);//加载默认系统值
void LoadDefaultConfig(void);//加载默认配置值
void LoadDefaultCalibrate(void);//加载默认校准值
void ReadSaveData(void);//读取保存参数
//void WriteSaveData(void);//写入保存参数

#define SetSystemStatus(status) (SystemStatus=status)
#define GetSystemStatus() (SystemStatus)
#define GetSystemMessage() (SystemMessage)
#define SetSystemMessage(msg) (SystemMessage=msg)

void Check_Calibrate_Limit(void);//校准值检查
void Hex_Format(uint32_t dat , uint8_t Dot , uint8_t len , uint8_t dispzero);
extern uint8_t USART_RX_BUF[200];

#endif
