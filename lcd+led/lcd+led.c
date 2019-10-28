#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#include<lcdavr.h>
void main()
{
   DDRB=0xff;
   lcd_init();
   DDRC=0xff;
   DDRA=0x00;
   PORTA=0b11111000;
   while(1)
   {   if((PINA & 0b11111000)== 0b01111000)  //switch1 is closed
           { lcd_clear();
	       lcd_command(0x80);
	       lcd_string("led blink");
	         PORTC=0xff;
	           _delay_ms(100);
			   PORTC=0x00;
			   _delay_ms(100);
			   }
			   else 
			      lcd_clear();
				  PORTC=0x00;

				  if((PINA & 0b11111000)==0b10111000)  //switch 2 is closed
				  {
				        lcd_command(0x80);
						lcd_string("led alternate");
						PORTC=0b10101010;
						_delay_ms(100);
						PORTC=0b01010101;
						_delay_ms(100);
						}
						else
						  lcd_clear();
						  PORTC=0x00;

                   if((PINA & 0b11111000)==0b11011000)  //switch 3 is closed
				   {
				         lcd_command(0x80);
						 lcd_string("relay led");
						 PORTC=0b10000000;
						 _delay_ms(100); 
						 PORTC=0b01000000;
						 _delay_ms(100);
						 PORTC=0b00100000;
						 _delay_ms(100);
						 PORTC=0b00010000;
						 _delay_ms(100);
						 PORTC=0b00001000;
						 _delay_ms(100);
						 PORTC=0b00000100;
						 _delay_ms(100);
						 PORTC=0b00000010;
						 _delay_ms(100); 
						 PORTC=0b00000001;
						 _delay_ms(100);
						 }
						 
						 else
						     lcd_clear();
							 PORTC=0x00;

                         
						 if((PINA & 0b11111000)==0b11101000) //switch 4 is closed
						    {
                               lcd_command(0x80);
							   lcd_string("chaser led");
							   PORTC=0b10000000;
							   _delay_ms(100);
							   PORTC=0b11000000;
							   _delay_ms(100);
							   PORTC=0b11100000;
							   _delay_ms(100);
							   PORTC=0b11110000;
							   _delay_ms(100);
							   PORTC=0b11111000;
							   _delay_ms(100);
							   PORTC=0b11111100;
							   _delay_ms(100);
							   PORTC=0b11111110;
							   _delay_ms(100);
							   PORTC=0b11111111;
							   _delay_ms(100);
							   }
							   
							   else
							     lcd_clear();
								 PORTC=0x00;
								 
						   if((PINA & 0b11111000)==0b11110000) //switch 5 is closed
						     {
							      lcd_command(0x80);
								  lcd_string("curtain/on/of");
								  PORTC=0xff;
								  _delay_ms(100);
								  PORTC=0b11100111;
								  _delay_ms(100);
								  PORTC=0b11000011;
								  _delay_ms(100);
								  PORTC=0b10000001;
								  _delay_ms(100);
								  PORTC=0x00;
								  _delay_ms(100);
								  PORTC=0b10000001;
								  _delay_ms(100);
								  PORTC=0b11000011;
								  _delay_ms(100);
								  PORTC=0b11100111;
								  _delay_ms(100);
								  PORTC=0b11111111;
								  _delay_ms(100);
								  }
								  
								  else
								    lcd_clear();
									PORTC=0x00;		     

							    
							     
	   }
	   }
