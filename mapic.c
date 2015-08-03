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




	int push;

	void retardo(unsigned int i){for(;i>0;i--);}


	void  derizq()
	{


	char n;
	n=0x80;
		while(1)
		{

		PORTD=n;
		retardo(5000);

		if(n == 0x01)
		{	return;
		}
		else
		{
	n=n>>1;
		}
		}
	}


	void  izqder()
	{


	char n2;
	n=0x01;
		while(1)
		{

		PORTD=n2;
		retardo(5000);

		if(n2 == 0x80)
		{	return;
		}
		else
		{
	n=n<<1;
		}
		}
	}


	void  ambos()
	{
	izqder();
	derizq();
return;

	}


	void  verifica()
	{

		switch(push)
{
			case 1:	derizq();
break;
case 2:	izqder();
break;
case 3:	ambos();
break;

}
return;

	}

	void setup(){
	OSCCON=0x60;
	ANSEL=0;
	TRISA=1;
	PORTA=0;
	TRISD=0;
	PORTD=0;

	push=0;
}

	void loop(){



		while(1)
		{

		if(	PORTAbits.RA0 == 1)
		{
	push=1;		}
		else
		{

		if(	PORTAbits.RA1 == 1)
		{
	push=2;		}
		else
		{

		if(	PORTAbits.RA2 == 1)
		{
	push=3;		}
		}
		}
		}

	}

	void main(void){
		setup();
		loop();

		 return;
	 }
