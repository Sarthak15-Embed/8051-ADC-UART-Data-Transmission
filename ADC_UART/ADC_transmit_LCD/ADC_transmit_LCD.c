#include<reg51.h>
#include"LCD_4bit.h"
#include"uart.h"
#include"ADC.h"
#include"delay.h"
unsigned char Adc_value;
void main()
{
	UART_Init();
	lcd_init();
	lcd_cmd(0x80);		
	lcd_str("Adc_value:");
	while(1)
	{
  	Adc_value=Adc_read();
		lcd_cmd(0xC0);
		Adc_display(Adc_value);
		UART_Tx(':');
		UART_Tx((Adc_value/100)+'0');
	  UART_Tx(((Adc_value/10)%10)+'0');
	  UART_Tx((Adc_value%10)+'0');	
		lcd_data(0xDF);
		lcd_data('C');
	}
}
	
	
	
	
	
