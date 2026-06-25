#include<reg51.h>
#include"LCD_4bit.h"
#include"delay.h"
#include"ADC.h"
sbit rd = P2^3;
sbit wr = P2^4;
sbit intr = P2^5;
sfr ADC_port = 0x90;
unsigned char Adc_read(void)
	{ 
		unsigned char value;
		wr=0;
		delay(5);
		wr=1;
		while(intr==1);
		rd=0;
		delay(5);
  	value=ADC_port;
		rd=1;
		return value;
	}