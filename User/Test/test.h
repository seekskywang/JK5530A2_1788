#ifndef __test_h
#define __test_h
#include "stdint.h"
#include  "Globalvalue/globalvalue.h"

#define  CmdNumb         17
#define  CmdLen          12 

#define ChrStartR      0x3E
#define ChrStartS      0x3C

#define ChrEndR    	   0x0D
#define ChrEndS    	   0x0A

#define PARA_ERR       1
#define CMD_ERR        2
#define REM_ERR        3

extern const uint8_t Disp_Main_Ord[][3];
extern uint8_t CorrectionflagC,CorrectionflagR,Correc_successflag;

void Power_Process(void);


//测试程序
void Test_Process(void);
void Load_Process(void);
void Pow_Process(void);
//文件管理程序
void File_Process(void);

//参数设置程序   测量设置
void Setup_Process(void);
//数据保存程序
void Data_StoreProcess(void) ;
//档号显示
void Range_Process(void);
//档计数显示
void Range_CountProcess(void);
 // 列表显示
void ItemProcess(void);
//用户校正
void Use_DebugProcess(void) ;
uint16_t Uart_Process(uint8_t len,char* buf);
void Fac_DebugProcess(void);
void Use_SysSetProcess(void);//系统设置
void Use_LimitSetProcess(void);//极限列表设置
void Use_ITEMSetProcess(void);//列表扫描设置
int8_t PackStandFrame(int8_t * framebuf, int8_t * datbuf, int8_t len);
Sort_TypeDef Disp_NumKeyboard_Set(Disp_Coordinates_Typedef *Disp_Coordinates);
Sort_TypeDef Disp_NumKeyboard_time(Disp_Coordinates_Typedef *Disp_Coordinates);
Sort_TypeDef Disp_Set_Num(Disp_Coordinates_Typedef *Coordinates);
Sort_TypeDef Disp_Set_C(Disp_Coordinates_Typedef *Coordinates);
Sort_TypeDef Disp_Set_T(Disp_Coordinates_Typedef *Coordinates);
uint8_t Freq_Set_Num(Disp_Coordinates_Typedef *Coordinates);
uint8_t Avg_Set_Num(Disp_Coordinates_Typedef *Coordinates);//平均数设置
Sort_TypeDef Disp_Set_InputNum(Disp_Coordinates_Typedef *Coordinates);
void Set_daot(uint8_t *buff,uint8_t dot);
Sort_TypeDef Disp_Set_InputpreNum(Disp_Coordinates_Typedef *Coordinates);
Sort_TypeDef Disp_Set_InputpreSecNum(Disp_Coordinates_Typedef *Coordinates);
void Set_Compbcd_float(void);
uint8_t Test_Comp(All_Compvalue_Typedef *pt);
void Soft_Turnon(void);
void Test_Comp_Fmq(void);
uint8_t Uart3_Process(void);


void  Avg_Test(uint8_t *buff,uint8_t dot,uint8_t *buff1,uint8_t dot1);//平均测试值
void  Write_Usbdata (volatile uint8_t  *buffer,uint32_t num);

void Send_T0_USB(void);
void input_password(Disp_Coordinates_Typedef *Coordinates );//

void input_num(Disp_Coordinates_Typedef *Coordinates );


//void Send_Main_Ord(void);
#endif
