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


	void  getListPorts()
	{
		PORTDbits.RD1=!	PORTDbits.RD1;

		PORTDbits.RD2=!	PORTDbits.RD2;

		PORTDbits.RD3=!	PORTDbits.RD3;

		if(5==5)
		{	null		}
	
		if(10<=7)
		{	null		}
		else{
		null		}
	
	}
	void  metodo1()
	{
		PORTA=!	PORTA;
		retardo(5000);

	}

	void setup(){
	OSCCON=0x60;
	ANSEL=0;
	PORTAbits.RA1=1;
	PORTAbits.RA2=0;

}

	void loop(){
	 	while(1){

	metodo1();
		}

	}

	void main(void){
		setup();
		loop();
	getListPorts();

		 return; 
	 }