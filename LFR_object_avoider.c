#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
//#define lcd PORTD
//#include<ilibrary/lcd_library.h>
void main()
{ 
  //lcd_init();
  //DDRD=0xff;
  DDRB=0xff;
  DDRA=0b11111110;
  while(1)
  {if(PINA==0b00000000) // if nothing is sensed by IR
   PORTB= 0b00000101;  //will go forward
   else if(PINA==0b00000001) // if anything comes iin the way
   PORTB= 0b00000001;  //will turn right
  
  }
}
