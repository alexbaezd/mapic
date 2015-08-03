#include <xc.h>
// CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT// Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // RE3/MCLR pin function select bit (RE3/MCLR pin function is digital input, MCLR internally tied to VDD)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)



// CONFIG2

#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)

#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)




	int i;
	void    interrupt  miISR()
	{
i--;

		INTCONbits.INTF = 0;

	}

	void setup(){
	OSCCON=0x60;
	ANSEL=0;
	ANSEL = 0;
	ANSELH = 0;
	TRISA=1;
	PORTA=0;
	TRISD=0;
	PORTD=0;
	INTCON = 0;
	INTCONbits.GIE = 1;
	INTCONbits.INTE = 1;
	INTCONbits.RBIE = 1;

		TRISB=0b00000001;

		PORTB=0b10000000;

	i=9;
}

	void loop(){
	 	while(1){


	
	int c;
		if(	PORTAbits.RA0 == 1)
		{			__delay_ms(330);

	c=1;		}

		switch(c)
{
			case 1:i++;

	c=0;break;

}

		switch(	PORTA)
{
			case 9:
		PORTD=0b01100111;
break;
case 8:
		PORTD=0b01111111;
break;
case 7:
		PORTD=0b00000111;
break;
case 6:
		PORTD=0b01111101;
break;
case 5:
		PORTD=0b01101101;
break;
case 4:
		PORTD=0b01100110;
break;
case 3:
		PORTD=0b01001111;
break;
case 2:
		PORTD=0b01011011;
break;
case 1:
		PORTD=0b00000110;
break;
case 0:
		PORTD=0b00111111;
break;

}

		if(i == 0  || i  < 0)
		{	
	i=0;
		PORTBbits.RB7=0;

		PORTBbits.RB5=1;
		}
		else
		{
	
		if(i > 9)
		{	
	i=9;
		PORTBbits.RB7=1;

		PORTBbits.RB5=0;
		}
		}
		}

	}

	void main(void){
		setup();
		loop();

		 return; 
	 }