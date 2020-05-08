#ifndef __use_disp_H_
#define __use_disp_H_
#include  "stdint.h"
#include  "Globalvalue/globalvalue.h"
#define FIRSTLINE	26
#define	SPACE1		22
#define LIST1		0
#define LIST2		250
#define SELECT_1END 192
#define SELECT_2END (410+32)

#define COL1		 40
#define COL2		 80
#define COL3		 180
#define COL4		 280
#define COLW1		 40
#define COLW2		 100
#define ROW1		 92
#define ROW2		 114
#define ROW3		 136
#define ROW4		 158
#define ROW5		 180
#define ROWW		 22

//#define FIRSTLINE	246
//#define	SPACE1		22
//#define LIST1		480
//#define LIST2		230
//#define SELECT_1END   (480-192)
//#define SELECT_2END    38

#define  SCREENWIDE   480
#define  SCREENHIGH   272
#define  INSTRUCT_TO_DEBUG	Delay(0x3f);
#define  SHORT_DELAY  Delay(0x1f);
#define  INSTR_FIVE   0x03
#define  SITE         5
#define  CORRE_SITE   5
#define  INSTR_FOUR   0x00
#define  LONGDELAY	  Delay(0x2ff);
extern const uint8_t Disp_Range_Main_Disp[][2+1];
extern const uint8_t Disp_Unit[][2+1];
extern const uint32_t FreqNum[];
extern const uint8_t Cp_Button_Tip[][7+1];
extern const uint8_t Cs_Button_Tip[][7+1];
extern const uint8_t Lp_Button_Tip1[][7+1];
extern const uint8_t Ls_Button_Tip[][7+1];
extern const uint8_t Z_Button_Tip[][7+1];
extern const uint8_t Y_Button_Tip[][7+1];
extern const uint8_t R_Button_Tip[][7+1];
extern uint8_t listcap;
void Disp_Fastbutton(void);
void Disp_MidRect(void);
void Disp_TestScreen(void);
void Disp_ListScreen(void);

void ListHandle(void);
void Disp_List_Item(void);
void Disp_Pow_Item(void);
void Disp_Load_Item(void);
void Disp_Test_Item(void);//测量显示主菜单的项目显示
void Disp_Range_Item(void);//档号显示主菜单项目显示
void Disp_Range_Count_Item(void);//档计数显示界面
void Disp_List_Count_Item(void);//列表显示子函数
void Disp_Test_Set_Item(void);  //测量设置界面显示菜单的项
void Disp_UserCheck_Item(void);	//用户校正
void Disp_FacrCheck_Item(Button_Page_Typedef* Button_Page);
void Disp_LimitList_Item(void);//极限列表设置
void Disp_ListScan_Item(void);
void Disp_Sys_Item(void);//系统设置
void Disp_Serve_correction (void);//校正服务设置界面
void Disp_Serve_correctionR (void);//校正电阻显示
void Disp_Fac_Debug_C(Button_Page_Typedef* Button_Page);//电容校正界面
void Disp_Fac_Debug_R(Button_Page_Typedef* Button_Page);//电阻校正界面
void Disp_Correction_SetR(Button_Page_Typedef* Button_Page);//校正电阻设置
void Disp_FacCal(Button_Page_Typedef* Button_Page);
void Disp_Fastbutton(void);
void Disp_Button_value1(uint32_t value);
void Disp_Button_TestSet(uint32_t value);
void  Disp_Button_List(void);
void DispSet_value(Button_Page_Typedef* Button_Page);	//测量设置的设置参数值
void Disp_Test_value(Button_Page_Typedef* Button_Page); // 测量显示中的设置值
void Disp_RangeDispValue(Button_Page_Typedef *Button_Page);//档计数显示ON 或 OFF测试时档号显示界面的显示
void Disp_Debug_value(Button_Page_Typedef* Button_Page); //用户校正中的按键值设置
void Disp_Sys_value(Button_Page_Typedef* Button_Page);//系统设置中的设置项
void Disp_button_Num_time(void);
void Disp_button_Num_V(void);
void Disp_button_Num_A(void);
void Disp_button_Num_ms(void);
void Disp_button_Num_Freq(void);
Sort_TypeDef Time_Set_Cov(Sort_TypeDef *Time);
Sort_TypeDef Freq_Set_Cov(Sort_TypeDef *Freq);
Sort_TypeDef Time_Set_Cot(Sort_TypeDef *Time);
void Disp_button_Num_Avg(void);
void Disp_button_Num_Input(uint8_t page);//按键数字输入n,u,p,m,next,
Sort_TypeDef Input_Set_Cov(Sort_TypeDef *Input_Ref);
void Disp_Cp(void);
void Disp_Button_Fun_Set(uint16_t xpos,uint16_t ypos,uint8_t * Disp_Item,Button_Page_Typedef* Button_Page);
void Disp_LimitSEt_value(Button_Page_Typedef* Button_Page);//极限设置按键值
void Disp_List_Res(Button_Page_Typedef* Button_Page);
void Disp_Correction_Set(Button_Page_Typedef* Button_Page);//校正设置

void Disp_Cp_D(void);
void Disp_Cp_Q(void);
void Disp_Cp_G(void);
void Disp_Cp_Rp(void);
void Disp_Cs_Rs(void);
void Disp_Cs_D(void);
void Disp_Cs_Q(void);
void Disp_Lp_Q(void);
void Disp_Lp_Rp(void);
void Disp_Lp_Rd(void);
void Disp_Lp_D(void);
void Disp_Lp_G(void);
void Disp_Ls_D(void);
void Disp_Ls_Q(void);
void Disp_Ls_Rs(void);
void Disp_Ls_Rd(void);
void Disp_Z_d(void);
void Disp_Z_r(void);
void Disp_Y_d(void);
void Disp_Y_r(void);
void Disp_R_X(void);
void Disp_Rs_Q(void);
void Disp_Rp_Q(void);
void Disp_Testvalue(uint8_t siwtch);//显示测试数据
void Disp_Big_MainUnit(uint8_t unit,uint8_t unit1);
void Disp_Big_SecondUnit(uint8_t unit,uint8_t unit1);
void Send_Freq(Send_Ord_Typedef *ord);
void Send_Main_Ord(void);
//测试时档号显示界面的显示
void Disp_Range_ComDispValue(Button_Page_Typedef *Button_Page);
void Disp_RangeDispvalue(uint8_t data);
void Disp_Range_DispMainUnit(uint8_t num,uint8_t unit);//档号显示中Cp的单位
void Disp_Range_DispSecondUnit(uint8_t num,uint8_t unit);//档号显示中Rp的单位
void Disp_RangeTestvalue(void);    //档号显示中的Cp和Rp的值
void Disp_RangeCount(void);
void Disp_LIMIT_ComDispValue(Button_Page_Typedef *Button_Page);
void Disp_List_value(Button_Page_Typedef* Button_Page);
void Disp_Load_value(Button_Page_Typedef* Button_Page);
void Disp_Pow_value(Button_Page_Typedef* Button_Page);
void Disp_Scan_Compvalue(uint8_t set);
void Disp_Scan_SetCompvalue(Button_Page_Typedef* Button_Page);
void Disp_Button_ItemScanSet(uint32_t value);
void Disp_Button_ItemScan_no(void);
void Send_Request(uint8_t x,uint8_t req);
uint16_t SerialRemoteHandleL(uint8_t len,char* buf);
void Disp_Set_Unit_12(uint32_t unit,uint32_t x,uint32_t y);
void Disp_Set_Unit_16(uint32_t unit,uint32_t x,uint32_t y);
Sort_TypeDef Input_Set_CovPre(Sort_TypeDef *Input_Ref);
void Disp_Test_Unit_v(uint32_t x,uint32_t y);
void Disp_Test_Unit_mA(uint32_t x,uint32_t y);
void Send_UartStart(void);
void Savetoeeprom(void);
void ReadSavedata(void);
void Disp_G_B(void);
//void DelayMs(uint32_t nMs);
void Communiction_Protocol(Button_Page_Typedef* Button_Page );
void lcd_image(uint8_t *pt);

void Disp_Start_Corr(void);    //显示开始校正
void Start_Correction(void);	//开始校正
void Init_C(void);//电容初始化校正
void Correction_C(Button_Page_Typedef* Button_Page)	;	//电容校正
void Save_C(void);	//保存电容值

void Init_R(void);//初始化电阻
void Correction_R(Button_Page_Typedef* Button_Page);		//电阻校正
void Save_R(void);	//保存电阻值
void Exit_correction(void);	//退出校正
void Clear_Instr(void);  //清除校正
void Close_Clear(void);		//关闭清零
void Open_Clear(void);		//开路清零
void Short_Clear(void);			//短路清零

void Send_Uart3(uint8_t *buff);
void Disp_Usbflag(uint8_t flag);
void Disp_switch(void);
void Disp_Range_Num(uint8_t num);
#endif
