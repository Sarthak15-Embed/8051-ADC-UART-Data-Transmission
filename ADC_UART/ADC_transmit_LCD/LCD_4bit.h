#include<reg51.h>
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
sfr Lcd_Port=0x80;
void lcd_init(void);
void lcd_cmd(unsigned char cmd);
void lcd_data(unsigned char data1);
void Adc_display(unsigned char Adc_value);
void lcd_str(unsigned char *str);


