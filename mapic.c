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



#define _XTAL_FREQ 4000000

	int i;
	int c;
	void   interrupt  miISR()
	{

		INTCONbits.GIE = 0;

		if(	INTCONbits.GIE)
		{	
		PORTDbits.RD0=1;
		retardo(60);

		PORTDbits.RD0=0;
		retardo(1);

		PORTDbits.RD0=1;
		retardo(1);

		PORTDbits.RD0=0;
		retardo(1);

		PORTDbits.RD0=1;
		retardo(1);

		PORTDbits.RD0=0;
		retardo(1);

		PORTDbits.RD0=0;
		retardo(1);

		PORTDbits.RD0=1;
		retardo(1);

		PORTDbits.RD0=0;
		retardo(1);

		PORTDbits.RD0=1;
		retardo(1);

		PORTDbits.RD0=0;
		retardo(1);

		PORTDbits.RD1=1;
		retardo(8);

		PORTDbits.RD1=0;

		PORTDbits.RD2=1;
		retardo(30);

		PORTDbits.RD2=0;

		INTCONbits.T0IE = 0;
		}

		INTCONbits.GIE = 1;

	}


	void  setupTimer0()
	{

		OPTION_REGbits.T0CS = 0;

		OPTION_REGbits.PSA = 0;

		INTCONbits.GIE = 1;

		INTCONbits.T0IE = 1;

		OPTION_REGbits.PS = 7;
	TMR0= 0x00
	}

	void setup(){
	OSCCON=0x60;
	ANSEL=0;
	TRISD=0;
	PORTD=0;
	setupTimer0();

	i=0;
}

	void loop(){
	 	 

 		

	}

	void main(void){
		setup();
		loop();

		 return; 
	 }