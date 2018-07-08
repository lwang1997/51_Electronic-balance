#ifndef __MAIN_H__
#define __MAIN_H__

#include <reg52.h>


sbit Buzzer = P2^2;
sbit LED_Y = P2^0;
sbit LED_R = P2^1;

//按键 IO设置
sbit KEY1 = P3^5;
sbit KEY2 = P3^6;
sbit KEY3 = P3^7;
sbit KEY4 = P1^3;

//函数或者变量声明
extern void Delay_ms(unsigned int n);
extern unsigned char Scan_Key();
extern void Buzzer_Di();
extern void Get_Maopi();
extern void Get_Weight();

extern unsigned char KEY_NUM;

#endif