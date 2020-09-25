/*
风速传感器读取程序

创建日期：2018年10月29日
作者：孙浩

soilNPK485_Init(void);
初始化函数，主要为UART初始化和GPIO初始化
本例使用UART2，9600，8N1
UART2_TXD = (GPIO_NUM_17)
UART2_RXD = (GPIO_NUM_16)
RS485RD   =  21

*/
#ifndef _soilNPK485_H_
#define _soilNPK485_H_

uint32_t soilN_485;
uint32_t soilP_485;
uint32_t soilK_485;

extern void soilNPK485_Init(void);
extern void soilNPK485_Read(void);
extern void soilNPK485_pwroff(void);

#endif

