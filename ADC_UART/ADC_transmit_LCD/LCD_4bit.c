#include<reg51.h>
#include"LCD_4bit.h"
#include"delay.h"
void lcd_init()
{
	delay(20);
lcd_cmd (0x02);
lcd_cmd (0x28);
lcd_cmd (0x0C);
lcd_cmd (0x06);
lcd_cmd (0x01);
}
void lcd_cmd(unsigned char cmd)
{
	rs=0;
	rw=0;
	Lcd_Port=(cmd & 0xF0);
	en=1;
	delay(5);
	en=0;
	delay(2);
	Lcd_Port=((cmd<<4)& 0xF0);
	en=1;
	delay(5);
	en=0;
}
void lcd_data(unsigned char data1)
{
	rs=1;
	rw=0;
	Lcd_Port=(data1 & 0xF0);
	en=1;
	delay(5);
	en=0;
	delay(2);
	Lcd_Port=((data1<<4) & 0xF0);
	en=1;
	delay(5);
	en=0;
}
void Adc_display(unsigned char Adc_value)
{
	lcd_data((Adc_value/100)+'0');
	lcd_data(((Adc_value/10)%10)+'0');
	lcd_data((Adc_value%10)+'0');	
}
void lcd_str(unsigned char *str)
{
	/*int i=0;
	 while (str[i] != "\0") {
        lcd_data(str[i]);
        i++;
    }*/
	while(*str)
	{
		lcd_data(*str++);

	}
}
