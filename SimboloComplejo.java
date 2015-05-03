
import java.util.Stack;

class SimboloComplejo{
	 String nombre;
	 Stack tipo;
	
	public SimboloComplejo(String nombre, Stack tipo){
		 this.nombre = nombre;
		 this.tipo = tipo;
	 }

	 public static String tipoToString(Stack st){
		 String retorno = "";

		 for(int cont = st.size()-1; cont>=0; cont--)
		 switch(((Character)st.elementAt(cont)).charValue()) {
			 case('i'): { retorno += "un entero."; break; }
			 case('r'): { retorno += "un rial."; break; }
			 case('b'): { retorno += "un booleano."; break; }
			 case('c'): { retorno += "un caracter."; break; }
			 case('p'): { retorno += "un puntero a "; break; }
			 case('a'): { retorno += "un array de "; break; }
			 case('u'): { retorno += "indefinido."; break; }
		 };
		 return retorno;
	 }
 }