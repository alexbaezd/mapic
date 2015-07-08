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





	void retardo(unsigned int i){for(;i>0;i--);}


	void  MiMetodo()
	{

	char a ='e';
	int b =122;
	float altura =4.456789;
	char u ='u';
//La variable: per es un valor no compatible 12344 se requiere TRUE o FALSE

		PORTA=!	PORTA;

	}

	void setup(){
	OSCCON=0x60;	PORTA=1;
	TRISAbits.TRISA0=1;

}

	void loop(){
	 	while(1){


<<<<<<< Updated upstream
		PORTA=!	PORTA;
=======
<<<<<<< HEAD
<<<<<<< HEAD
		switch(	PORTAbits.RA0)
{
			case 1:
		PORTDbits.RD0=!	PORTDbits.RD0;
break;
case 2:
		PORTDbits.RD0=!	PORTDbits.RD0;
break;

}

		if(	PORTAbits.RA1)
		{		derizq();
		}

		if(	PORTAbits.RA2)
		{		ambos();
		}

		if(	PORTA || 	PORTB)
		{		izqder();
		}

		if(	PORTA > 	PORTB  < 	PORTC)
		{		izqder();
		}

		if(	PORTA > 	PORTB  < 	PORTC  == 	PORTA)
		{		izqder();
		}

		if(	PORTA > 	PORTB  && 	PORTC  <= 	PORTD)
		{		izqder();
		}

		if(	PORTA > 	PORTB  && 	PORTC  <= 	PORTD  || 	PORTA)
		{		izqder();
		}

		if(	PORTA > 	PORTB  < 	PORTC  <= 	PORTD  >= 	PORTA  == 	PORTC  || 	PORTD  && 	PORTA)
		{		izqder();
		}

	int bbb =8;
		if(	PORTA == 0b01010101)
		{		izqder();
		}

		if(	PORTA == 0x53)
		{		izqder();
		}

		if(223 == 5)
		{		izqder();
		}
bbb<<2;
kkk>>3;
kkk=3+223/3f;
kkk=((3+2)+(3+3));
kkk=((9+999)-(5));
kkk=((x-y)/2f);
kkk=((x-y)/2f)+333;
kkk=(PBBB)+5;
kkk=(5+6-B6f)+5;
kkk=((4+4-f)-(t-t-t))+5;
kkk=((4+4+(6-7))+(6+6))+6;
	PORTD=	PORTD+n;
i++;
i--;
=======
		PORTA=!	PORTA;
>>>>>>> origin/master
=======
		PORTA=!	PORTA;
>>>>>>> origin/master
>>>>>>> Stashed changes
		}

	}

	void main(void){
		setup();
		loop();

		 return; 
	 }