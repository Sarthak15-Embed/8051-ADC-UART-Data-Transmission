#include<reg51.h>
#include"LCD_4bit.h"
#include"uart.h"
#include"delay.h"
void Received(char *,char);
//char Adc_value;
void main()
{
	char Rx_data[5];
	UART_Init();
	lcd_init();
	lcd_cmd(0x80);		
	lcd_str("Adc_value:");
	while(1)
	{
		Received(Rx_data,5);
		lcd_cmd(0xC0);
	  lcd_data(Rx_data[1]);
		lcd_data(Rx_data[2]);
		lcd_data(Rx_data[3]);
		lcd_data(Rx_data[4]);
	}
}
void Received(char *ptr,char length)
{
	char i;
	char temp=UART_Rx();
	if(temp==':')
	{
	for(i=0;i<length;i++)
	*(ptr+i)=UART_Rx();
	}
}
/*UART_Tx((Adc_value/100)+'0');
	  UART_Tx(((Adc_value/10)%10)+'0');
	  UART_Tx((Adc_value%10)+'0');*/
//Tx_data(':') dabling