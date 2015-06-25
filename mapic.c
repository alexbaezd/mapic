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
		if(10==7)
		{			retardo(1);
		}
		else
		{
	
		if(2<20)
		{			retardo(2);
		}
		}

	}
	void  MuchosSINO()
	{
		if(10==7)
		{	
		PORTDbits.RD3=!	PORTDbits.RD3;
		}
		else
		{
	
		if(2<20)
		{	
		PORTDbits.RD1=!	PORTDbits.RD1;
		}
		else
		{
	
		if(10>=20)
		{	
		PORTDbits.RD2=!	PORTDbits.RD2;
		}
		else
		{
	
		if(10>=20)
		{	
		PORTDbits.RD7=!	PORTDbits.RD7;
		}
		}
		}
		}

	}


	void  MetodoPuertos()
	{		retardo(23232323);

		Switch(1)
{
			default: 		retardo(2333);
break;

}

	}


	void  MuchosCASE()
	{
		Switch(2423)
{
			case 1:
		if(10<=7)
		{	
		PORTDbits.RD1=!	PORTDbits.RD1;

		While(3>2)Do
		{
	
		PORTC=!	PORTC;

		if(10>=7)
		{			retardo(2220);
		}
		else
		{
	
		PORTDbits.RD1=!	PORTDbits.RD1;
		}
		}		}
break;
case 2:	MuchosSINO();
break;
case 3:	MetodoPuertos();
break;
case 4:
		PORTBbits.RB0=!	PORTBbits.RB1;
break;
default: 
		if(10>7)
		{			retardo(2220);
		}
break;

}

	}

	void setup(){
	OSCCON=0x60;
	ANSEL=0;
	TRISD=0;
	PORTD=0;

		if(10>7)
		{			retardo(2220);
		}

}

	void loop(){
	 	while(1){


		PORTDbits.RD0=!	PORTDbits.RD0;
		retardo(50000);

		if(10>=7)
		{			retardo(2220);
		}
		else
		{
	
		PORTDbits.RD1=!	PORTDbits.RD1;
		}
		}

	}

	void main(void){
		setup();
		loop();

		if(10<=7)
		{	
		PORTDbits.RD1=!	PORTDbits.RD1;

		While(3>2)Do
		{
	
		PORTC=!	PORTC;

		if(10>=7)
		{			retardo(2220);
		}
		else
		{
	
		PORTDbits.RD1=!	PORTDbits.RD1;
		}
		}		}
	MiMetodo();
	MuchosSINO();

		Switch(5)
{
			default: 		retardo(2333);
break;

}

		While(10>=89)Do
		{
			retardo(1);

		PORTA=!	PORTA;

		While(5<3)Do
		{
	
		While(3==3)Do
		{
	
		PORTB=!	PORTB;

		if(10==7)
		{	
		PORTDbits.RD3=!	PORTDbits.RD3;
		}
		else
		{
	
		if(2<20)
		{	
		PORTDbits.RD1=!	PORTDbits.RD1;
		}
		else
		{
	
		if(10>=20)
		{	
		PORTDbits.RD2=!	PORTDbits.RD2;
		}
		else
		{
	
		if(10>=20)
		{	
		PORTDbits.RD7=!	PORTDbits.RD7;
		}
		}
		}
		}
		}		}		}
		 return; 
	 }