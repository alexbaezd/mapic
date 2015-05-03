import java_cup.runtime.*;
public class ManejoDeErrores{
    
    public String Errores(int tipo){
        String men=" ";
        switch (tipo){
            case 0:
                men = "E=0 Error chale quien sabe porr que  ";
                break;
           /*

     comente los case solo falta agrefar el texto  , genere el -dump_states y me dio 189 estados , checalo crealo de nuevo y checa bien
    

          case 0:men = "E=0        ";break;
          case 1:men = "E=1        ";break;
          case 2:men = "E=2        ";break;
          case 3:men = "E=3        ";break;
          case 4:men = "E=4        ";break;
          case 5:men = "E=5        ";break;
          case 6:men = "E=6        ";break;
          case 7:men = "E=7        ";break;
          case 8:men = "E=8        ";break;
          case 9:men = "E=9        ";break;
          case 10:men = "E=10        ";break;
          case 11:men = "E=11        ";break;
          case 12:men = "E=12        ";break;
          case 13:men = "E=13        ";break;
          case 14:men = "E=14        ";break;
          case 15:men = "E=15        ";break;
          case 16:men = "E=16        ";break;
          case 17:men = "E=17        ";break;
          case 18:men = "E=18        ";break;
          case 19:men = "E=19        ";break;
          case 20:men = "E=20        ";break;
          case 21:men = "E=21        ";break;
          case 22:men = "E=22        ";break;
          case 23:men = "E=23        ";break;
          case 24:men = "E=24        ";break;
          case 25:men = "E=25        ";break;
          case 26:men = "E=26        ";break;
          case 27:men = "E=27        ";break;
          case 28:men = "E=28        ";break;
          case 29:men = "E=29        ";break;
          case 30:men = "E=30        ";break;
          case 31:men = "E=31        ";break;
          case 32:men = "E=32        ";break;
          case 33:men = "E=33        ";break;
          case 34:men = "E=34        ";break;
          case 35:men = "E=35        ";break;
          case 36:men = "E=36        ";break;
          case 37:men = "E=37        ";break;
          case 38:men = "E=38        ";break;
          case 39:men = "E=39        ";break;
          case 40:men = "E=40        ";break;
          case 41:men = "E=41        ";break;
          case 42:men = "E=42        ";break;
          case 43:men = "E=43        ";break;
          case 44:men = "E=44        ";break;
          case 45:men = "E=45        ";break;
          case 46:men = "E=46        ";break;
          case 47:men = "E=47        ";break;
          case 48:men = "E=48        ";break;
          case 49:men = "E=49        ";break;
          case 50:men = "E=50        ";break;
          case 51:men = "E=51        ";break;
          case 52:men = "E=52        ";break;
          case 53:men = "E=53        ";break;
          case 54:men = "E=54        ";break;
          case 55:men = "E=55        ";break;
          case 56:men = "E=56        ";break;
          case 57:men = "E=57        ";break;
          case 58:men = "E=58        ";break;
          case 59:men = "E=59        ";break;
          case 60:men = "E=60        ";break;
          case 61:men = "E=61        ";break;
          case 62:men = "E=62        ";break;
          case 63:men = "E=63        ";break;
          case 64:men = "E=64        ";break;
          case 65:men = "E=65        ";break;
          case 66:men = "E=66        ";break;
          case 67:men = "E=67        ";break;
          case 68:men = "E=68        ";break;
          case 69:men = "E=69        ";break;
          case 70:men = "E=70        ";break;
          case 71:men = "E=71        ";break;
          case 72:men = "E=72        ";break;
          case 73:men = "E=73        ";break;
          case 74:men = "E=74        ";break;
          case 75:men = "E=75        ";break;
          case 76:men = "E=76        ";break;
          case 77:men = "E=77        ";break;
          case 78:men = "E=78        ";break;
          case 79:men = "E=79        ";break;
          case 80:men = "E=80        ";break;
          case 81:men = "E=81        ";break;
          case 82:men = "E=82        ";break;
          case 83:men = "E=83        ";break;
          case 84:men = "E=84        ";break;
          case 85:men = "E=85        ";break;
          case 86:men = "E=86        ";break;
          case 87:men = "E=87        ";break;
          case 88:men = "E=88        ";break;
          case 89:men = "E=89        ";break;
          case 90:men = "E=90        ";break;
          case 91:men = "E=91        ";break;
          case 92:men = "E=92        ";break;
          case 93:men = "E=93        ";break;
          case 94:men = "E=94        ";break;
          case 95:men = "E=95        ";break;
          case 96:men = "E=96        ";break;
          case 97:men = "E=97        ";break;
          case 98:men = "E=98        ";break;
          case 99:men = "E=99        ";break;
          case 100:men = "E=100        ";break;
          case 101:men = "E=101        ";break;
          case 102:men = "E=102        ";break;
          case 103:men = "E=103        ";break;
          case 104:men = "E=104        ";break;
          case 105:men = "E=105        ";break;
          case 106:men = "E=106        ";break;
          case 107:men = "E=107        ";break;
          case 108:men = "E=108        ";break;
          case 109:men = "E=109        ";break;
          case 110:men = "E=110        ";break;
          case 111:men = "E=111        ";break;
          case 112:men = "E=112        ";break;
          case 113:men = "E=113        ";break;
          case 114:men = "E=114        ";break;
          case 115:men = "E=115        ";break;
          case 116:men = "E=116        ";break;
          case 117:men = "E=117        ";break;
          case 118:men = "E=118        ";break;
          case 119:men = "E=119        ";break;
          case 120:men = "E=120        ";break;
          case 121:men = "E=121        ";break;
          case 122:men = "E=122        ";break;
          case 123:men = "E=123        ";break;
          case 124:men = "E=124        ";break;
          case 125:men = "E=125        ";break;
          case 126:men = "E=126        ";break;
          case 127:men = "E=127        ";break;
          case 128:men = "E=128        ";break;
          case 129:men = "E=129        ";break;
          case 130:men = "E=130        ";break;
          case 131:men = "E=131        ";break;
          case 132:men = "E=132        ";break;
          case 133:men = "E=133        ";break;
          case 134:men = "E=134        ";break;
          case 135:men = "E=135        ";break;
          case 136:men = "E=136        ";break;
          case 137:men = "E=137        ";break;
          case 138:men = "E=138        ";break;
          case 139:men = "E=139        ";break;
          case 140:men = "E=140        ";break;
          case 141:men = "E=141        ";break;
          case 142:men = "E=142        ";break;
          case 143:men = "E=143        ";break;
          case 144:men = "E=144        ";break;
          case 145:men = "E=145        ";break;
          case 146:men = "E=146        ";break;
          case 147:men = "E=147        ";break;
          case 148:men = "E=148        ";break;
          case 149:men = "E=149        ";break;
          case 150:men = "E=150        ";break;
          case 151:men = "E=151        ";break;
          case 152:men = "E=152        ";break;
          case 153:men = "E=153        ";break;
          case 154:men = "E=154        ";break;
          case 155:men = "E=155        ";break;
          case 156:men = "E=156        ";break;
          case 157:men = "E=157        ";break;
          case 158:men = "E=158        ";break;
          case 159:men = "E=159        ";break;
          case 160:men = "E=160        ";break;
          case 161:men = "E=161        ";break;
          case 162:men = "E=162        ";break;
          case 163:men = "E=163        ";break;
          case 164:men = "E=164        ";break;
          case 165:men = "E=165        ";break;
          case 166:men = "E=166        ";break;
          case 167:men = "E=167        ";break;
          case 168:men = "E=168        ";break;
          case 169:men = "E=169        ";break;
          case 170:men = "E=170        ";break;
          case 171:men = "E=171        ";break;
          case 172:men = "E=172        ";break;
          case 173:men = "E=173        ";break;
          case 174:men = "E=174        ";break;
          case 175:men = "E=175        ";break;
          case 176:men = "E=176        ";break;
          case 177:men = "E=177        ";break;
          case 178:men = "E=178        ";break;
          case 179:men = "E=179        ";break;
          case 180:men = "E=180        ";break;
          case 181:men = "E=181        ";break;
          case 182:men = "E=182        ";break;
          case 183:men = "E=183        ";break;
          case 184:men = "E=184        ";break;
          case 185:men = "E=185        ";break;
          case 186:men = "E=186        ";break;
          case 187:men = "E=187        ";break;
          case 188:men = "E=188        ";break;
          case 189:men = "E=189        ";break;   	
				
		       */		
				
            default: men ="ERROR DESCONOCIDO";
        }
        return men;
    }

    public String analizaToken(Symbol curToken){
            int analiza = curToken.sym;
            String msn=" ";
            switch(analiza){

                case 0:msn = "  EOF ";break;
                case 1:msn = "  error  ";break;
                case 2:msn = "  CHALE  ";break;
                case 3:msn = "  MAIN  ";break;
                case 4:msn = "  FMAIN  ";break;
                case 5:msn = "  SETUP  ";break;
                case 6:msn = "  FSETUP  ";break;
                case 7:msn = "  FUSES  ";break;
                case 8:msn = " ENTRADA  ";break;
                case 9:msn = "  SALIDA ";break;


                case 10:msn = "  RETARDO  ";break;
                case 11:msn = " CICLO ";break;
                case 12:msn = "  FCICLO ";break;
                case 13:msn = "  PA ";break;
                case 14:msn = " PB  ";break;
                case 15:msn = "  PC  ";break;
                case 16:msn = "  PD ";break;
                case 17:msn = "  PE ";break;
                case 18:msn = "  TA ";break;
                case 19:msn = " TB  ";break;


                case 20:msn = " TC  ";break;
                case 21:msn = "  TD ";break;
                case 22:msn = " TE  ";break;
                case 23:msn = " TA0  ";break;
                case 24:msn = "  TA1 ";break;
                case 25:msn = " TA2  ";break;
                case 26:msn = "TA3   ";break;
                case 27:msn = "  TA4 ";break;
                case 28:msn = "TA5   ";break;
                case 29:msn = " TA6  ";break;


                case 30:msn = " TA7  ";break;
                case 31:msn = " TB0  ";break;
                case 32:msn = " TB1  ";break;
                case 33:msn = " TB2  ";break;
                case 34:msn = " TB3 ";break;
                case 35:msn = " TB4  ";break;
                case 36:msn = " TB5  ";break;
                case 37:msn = " TB6  ";break;
                case 38:msn = " TB7  ";break;
                case 39:msn = " TC0  ";break;


                case 40:msn = " TC1  ";break;
                case 41:msn = "TC2   ";break;
                case 42:msn = " TC3  ";break;
                case 43:msn = "  TC4 ";break;
                case 44:msn = "  TC5 ";break;
                case 45:msn = "TC6   ";break;
                case 46:msn = " TC7  ";break;
                case 47:msn = " TD0  ";break;
                case 48:msn = "  TD1 ";break;
                case 49:msn = " TD2  ";break;


                case 50:msn = " TD3  ";break;
                case 51:msn = " TD4  ";break;
                case 52:msn = " TD5  ";break;
                case 53:msn = "  TD6 ";break;
                case 54:msn = " TD7  ";break;
                case 55:msn = " TE0  ";break;
                case 56:msn = " TE1  ";break;
                case 57:msn = "  TE2 ";break;
                case 58:msn = " TE3  ";break;
                case 59:msn = "  PA0 ";break;



                case 60:msn = "  PA1 ";break;
                case 61:msn = " PA2  ";break;
                case 62:msn = " PA3  ";break;
                case 63:msn = " PA4  ";break;
                case 64:msn = " PA5  ";break;
                case 65:msn = " PA6  ";break;
                case 66:msn = "  PA7 ";break;
                case 67:msn = "  PB0 ";break;
                case 68:msn = " PB1  ";break;
                case 69:msn = " PB2  ";break;


                case 70:msn = " PB3  ";break;
                case 71:msn = "  PB4 ";break;
                case 72:msn = "  PB5 ";break;
                case 73:msn = "  PB6 ";break;
                case 74:msn = "  PB7 ";break;
                case 75:msn = " PC0  ";break;
                case 76:msn = "PC1   ";break;
                case 77:msn = "  PC2 ";break;
                case 78:msn = " PC3  ";break;
                case 79:msn = " PC4  ";break;


                case 80:msn = "  PC5 ";break;
                case 81:msn = "PC6   ";break;
                case 82:msn = " PC7  ";break;
                case 83:msn = " PD0  ";break;
                case 84:msn = "  PD1 ";break;
                case 85:msn = " PD2  ";break;
                case 86:msn = " PD3  ";break;
                case 87:msn = " PD4  ";break;
                case 88:msn = "  PD5 ";break;
                case 89:msn = " PD6  ";break;



                case 90:msn = " PD7  ";break;
                case 91:msn = "  PE0 ";break;
                case 92:msn = " PE1  ";break;
                case 93:msn = "  PE2 ";break;
                case 94:msn = " PE3  ";break;
                case 95:msn = " VOID  ";break;
                case 96:msn = " LPAREN  ";break;
                case 97:msn = " RPAREN  ";break;
                case 98:msn = " MAYOR  ";break;
                case 99:msn = " MENOR  ";break;


                case 100:msn = " MAS  ";break;
                case 101:msn = " MENOS  ";break;
                case 102:msn = " LLLAVE  ";break;
                case 103:msn = " RLLAVE  ";break;
                case 104:msn = "PCOMA   ";break;
                case 105:msn = " IGUAL  ";break;
                case 106:msn = " 106  ";break;
                case 107:msn = "  TOGGLE ";break;
                case 108:msn = " NUMERO  ";break;
                case 109:msn = "  ID ";break;

                default: msn= "ERROR TOKEN DESCONOCIDO"; break;
              

              		
            }
            
            return msn;
    }

  

    
}