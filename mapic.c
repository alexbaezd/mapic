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



<<<<<<< HEAD
	void setup(){
	OSCCON=0x60;
	ANSEL=0;
	TRISA=1;
	PORTA=0;
	TRISAbits.TRISA0=0;
	PORTDbits.RD0=0;
=======


	void retardo(unsigned int i){for(;i>0;i--);}


	void  MiMetodo()
	{

	int cantidad;
	float altura =9.872222;
	float altura2 =10.872222;
	int xxx =10;
		PORTA=!	PORTA;

	cantidad=9;
	}


	void  setValor( int x)
	{

		PORTA=!	PORTA;

		PORTDbits.RD0=0;
		retardo(20000);

		PORTDbits.RD0=0;

		PORTDbits.RD0=1;
		retardo(20000);

		PORTDbits.RD1=0;

		PORTDbits.RD0=2;
		retardo(20000);

		PORTDbits.RD2=0;

		PORTDbits.RD0=3;
		retardo(20000);

		PORTDbits.RD3=0;

	}


	void  suma( int x , int y , float j)
	{

		PORTA=!	PORTA;

		PORTDbits.RD0=0;
		retardo(20000);

		PORTDbits.RD0=0;

		PORTDbits.RD0=1;
		retardo(20000);

		PORTDbits.RD1=0;

		PORTDbits.RD0=2;
		retardo(20000);

		PORTDbits.RD2=0;

		PORTDbits.RD0=3;
		retardo(20000);

		PORTDbits.RD3=0;

	}


	void  a1( int x , int y , float j , char letra , bool flag)
	{

		PORTA=!	PORTA;

		PORTDbits.RD0=0;
		retardo(20000);

		PORTDbits.RD0=0;

		PORTDbits.RD0=1;
		retardo(20000);

		PORTDbits.RD1=0;

		PORTDbits.RD0=2;
		retardo(20000);

		PORTDbits.RD2=0;

		PORTDbits.RD0=3;
		retardo(20000);

		PORTDbits.RD3=0;

		PORTDbits.RD0=0;
		retardo(20000);

		PORTDbits.RD0=0;

		PORTDbits.RD0=1;
		retardo(20000);

		PORTDbits.RD1=0;

		PORTDbits.RD0=2;
		retardo(20000);

		PORTDbits.RD2=0;

		PORTDbits.RD0=3;
		retardo(20000);

		PORTDbits.RD3=0;

	}

	void setup(){
	OSCCON=0x60;
	ANSEL=0;
	PORTA=1;
	TRISAbits.TRISA0=1;
>>>>>>> origin/master

}

	void loop(){
	 	while(1){


<<<<<<< HEAD
		if(	PORTA == 0b00101010  || 	PORTB  == 0b00001000  && 	PORTC  > 0b00000000)
		{	
		PORTDbits.RD0=1;
		}
		else
		{
	
		PORTDbits.RD0=0;
		}
=======
		PORTA=!	PORTA;
		}

	}

	void main(void){
		setup();
		loop();

	int yyy =10;
	bool bandera =false;
		if(bandera == 1)
		{	
		PORTB=!	PORTB;
		}

		if(8 < 9)
		{	
	float x =10.33;
		PORTC=!	PORTC;

		if(5 > 6)
		{	
		PORTA=!	PORTA;

		PORTB=!	PORTB;

	char ca ='a';		}
		}

		if(3 < 4)
		{	
		PORTB=!	PORTB;

	yyy=0;		}
		else
		{
	
		if(5 > 7)
		{	
		PORTA=!	PORTB;

		PORTC=!	PORTC;
>>>>>>> origin/master
		}
		else
		{
			retardo(10);

		PORTD=!	PORTD;
null		}
		}

		 return; 
	 }