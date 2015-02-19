import java_cup.runtime.*;

%%
%unicode
%cup
%line
%column

%{	
     private Symbol symbol(int type){
	  return new Symbol(type, yyline, yycolumn);
	}
	private Symbol symbol(int type, Object value){
	  return new Symbol(type, yyline, yycolumn, value);
	}
%}


	VARIABLE=[A-Za-z_][A-Za-z_0-9]*

%%

/* Reglas léxicas*/



"TimeMS" 			{ return symbol(sym.CHALE,new String("\t\tretardo"));}

"Main" 		        { return symbol(sym.MAIN,new String("\n\n\tvoid main(void)"));}




"Setup" 		{ return symbol(sym.SETUP,new String("\tvoid setup()"));}


"Fuses" 		{ return symbol(sym.FUSES,new String("#include <xc.h>\n"
								                + "// CONFIG1\n" 
								                +"#pragma config FOSC = INTRC_NOCLKOUT// Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)\n" 
								                +"#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)\n"
								                +"#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)\n"
								                +"#pragma config MCLRE = OFF      // RE3/MCLR pin function select bit (RE3/MCLR pin function is digital input, MCLR internally tied to VDD)\n" 
								                +"#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)\n"
								                +"#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)\n"
								                +"#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)\n" 
								                +"#pragma config IESO = OFF       // Internal External Switchover bit (Internal/External Switchover mode is disabled)\n"
								                +"#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)\n" 
								                +"#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)\n" 
								                +"\n" +"\n" +"\n" 
								                +"// CONFIG2\n"
								                +"\n"
								                +"#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)\n"
								                +"\n"
								                +"#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)\n\n\n\n"));}

"PA" 		{ return symbol(sym.PA,new String("\tPORTA"));}
"PB" 		{ return symbol(sym.PB,new String("\tPORTB"));}
"PC" 		{ return symbol(sym.PC,new String("\tPORTC"));}
"PD" 		{ return symbol(sym.PD,new String("\tPORTD"));}
"PE" 		{ return symbol(sym.PE,new String("\tPORTE"));}

"TA" 		{ return symbol(sym.TA,new String("\tTRISA"));}
"TB" 		{ return symbol(sym.TB,new String("\tTRISB"));}
"TC" 		{ return symbol(sym.TC,new String("\tTRISC"));}
"TD" 		{ return symbol(sym.TD,new String("\tTRISD"));}
"TE" 		{ return symbol(sym.TE,new String("\tTRISE"));}

"TA0" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA0"));}
"TA1" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA1"));}
"TA2" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA2"));}
"TA3" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA3"));}
"TA4" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA4"));}
"TA5" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA5"));}
"TA6" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA6"));}
"TA7" 		{ return symbol(sym.TA,new String("\tTRISAbits.TRISA7"));}

"TB0" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB0"));}
"TB1" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB1"));}
"TB2" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB2"));}
"TB3" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB3"));}
"TB4" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB4"));}
"TB5" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB5"));}
"TB6" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB6"));}
"TB7" 		{ return symbol(sym.TA,new String("\tTRISBbits.TRISB7"));}

"TC0" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC0"));}
"TC1" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC1"));}
"TC2" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC2"));}
"TC3" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC3"));}
"TC4" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC4"));}
"TC5" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC5"));}
"TC6" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC6"));}
"TC7" 		{ return symbol(sym.TC,new String("\tTRISCbits.TRISC7"));}

"TD0" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD0"));}
"TD1" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD1"));}
"TD2" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD2"));}
"TD3" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD3"));}
"TD4" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD4"));}
"TD5" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD5"));}
"TD6" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD6"));}
"TD7" 		{ return symbol(sym.TD,new String("\tTRISDbits.TRISD7"));}

"TE0" 		{ return symbol(sym.TE,new String("\tTRISEbits.TRISE0"));}
"TE1" 		{ return symbol(sym.TE,new String("\tTRISEbits.TRISE1"));}
"TE2" 		{ return symbol(sym.TE,new String("\tTRISEbits.TRISE2"));}
"TE3" 		{ return symbol(sym.TE,new String("\tTRISEbits.TRISE3"));}

"PA0" 		{ return symbol(sym.PA0,new String("\tPORTAbits.RA0"));}
"PA1" 		{ return symbol(sym.PA1,new String("\tPORTAbits.RA1"));}
"PA2" 		{ return symbol(sym.PA2,new String("\tPORTAbits.RA2"));}
"PA3" 		{ return symbol(sym.PA3,new String("\tPORTAbits.RA3"));}
"PA4" 		{ return symbol(sym.PA4,new String("\tPORTAbits.RA4"));}
"PA5" 		{ return symbol(sym.PA5,new String("\tPORTAbits.RA5"));}
"PA6" 		{ return symbol(sym.PA6,new String("\tPORTAbits.RA6"));}
"PA7" 		{ return symbol(sym.PA7,new String("\tPORTAbits.RA7"));}

"PB0" 		{ return symbol(sym.PB0,new String("\tPORTBbits.RB0"));}
"PB1" 		{ return symbol(sym.PB1,new String("\tPORTBbits.RB1"));}
"PB2" 		{ return symbol(sym.PB2,new String("\tPORTBbits.RB2"));}
"PB3" 		{ return symbol(sym.PB3,new String("\tPORTBbits.RB3"));}
"PB4" 		{ return symbol(sym.PB4,new String("\tPORTBbits.RB4"));}
"PB5" 		{ return symbol(sym.PB5,new String("\tPORTBbits.RB5"));}
"PB6" 		{ return symbol(sym.PB6,new String("\tPORTBbits.RB6"));}
"PB7" 		{ return symbol(sym.PB7,new String("\tPORTBbits.RB7"));}

"PC0" 		{ return symbol(sym.PC0,new String("\tPORTCbits.RC0"));}
"PC1" 		{ return symbol(sym.PC1,new String("\tPORTCbits.RC1"));}
"PC2" 		{ return symbol(sym.PC2,new String("\tPORTCbits.RC2"));}
"PC3" 		{ return symbol(sym.PC3,new String("\tPORTCbits.RC3"));}
"PC4" 		{ return symbol(sym.PC4,new String("\tPORTCbits.RC4"));}
"PC5" 		{ return symbol(sym.PC5,new String("\tPORTCbits.RC5"));}
"PC6" 		{ return symbol(sym.PC6,new String("\tPORTCbits.RC6"));}
"PC7" 		{ return symbol(sym.PC7,new String("\tPORTCbits.RC7"));}

"PD0" 		{ return symbol(sym.PD0,new String("\tPORTDbits.RD0"));}
"PD1" 		{ return symbol(sym.PD1,new String("\tPORTDbits.RD1"));}
"PD2" 		{ return symbol(sym.PD2,new String("\tPORTDbits.RD2"));}
"PD3" 		{ return symbol(sym.PD3,new String("\tPORTDbits.RD3"));}
"PD4" 		{ return symbol(sym.PD4,new String("\tPORTDbits.RD4"));}
"PD5" 		{ return symbol(sym.PD5,new String("\tPORTDbits.RD5"));}
"PD6" 		{ return symbol(sym.PD6,new String("\tPORTDbits.RD6"));}
"PD7" 		{ return symbol(sym.PD7,new String("\tPORTDbits.RD7"));}

"PE0" 		{ return symbol(sym.PE0,new String("\tPORTEbits.RE0"));}
"PE1" 		{ return symbol(sym.PE1,new String("\tPORTEbits.RE1"));}
"PE2" 		{ return symbol(sym.PE2,new String("\tPORTEbits.RE2"));}
"PE3" 		{ return symbol(sym.PE3,new String("\tPORTEbits.RE3"));}

"ENTRADA" 		{ return symbol(sym.ENTRADA);}
"SALIDA" 		{ return symbol(sym.SALIDA);}

"Retardo" 		{ return symbol(sym.RETARDO,new String("\n\n\tvoid retardo(unsigned int i){for(;i>0;i--);}\n\n"));}

"Ciclo" 		{ return symbol(sym.CICLO,new String("\n\n\tvoid loop()"));}



"Void" 		{ return symbol(sym.VOID,new String("\n\tvoid  "));}
"Toggle" 		{ return symbol(sym.TOGGLE,new String("!"));}

"Si"		{ return symbol(sym.SI,nuevaEtq()); }
"No"		{ return symbol(sym.NO); }


"(" 		{ return symbol(sym.LPAREN); }
")" 		{ return symbol(sym.RPAREN); }
"{" 		{ return symbol(sym.LLLAVE); }
"}" 		{ return symbol(sym.RLLAVE); }
";" 		{ return symbol(sym.PCOMA); }
"+" 		{ return symbol(sym.MAS); }
"-" 		{ return symbol(sym.MENOS); }
">" 		{ return symbol(sym.MAYOR); }
"<" 		{ return symbol(sym.MENOR); }
"=" 		{ return symbol(sym.IGUAL); }
"==" 		{ return symbol(sym.IGUAL2); }
"<="
">="


{VARIABLE}       { return symbol(sym.ID, new String(yytext())); }
[:digit:]+  { return symbol(sym.NUMERO, new Integer(yytext())); }
[ \t\r\n]+  {;}
. 		{ System.out.println("Error léxico."+yytext()); }
