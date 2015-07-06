import java.util.Stack;
public class DatoSimbolo{

	private String nombre;
	private String valor;
	private String tipo;

	 
	 public DatoSimbolo(String nombre, String tipo,String valor){
		 this.setNombre(nombre);
		 this.setTipo(tipo);
		 this.setValor(valor);
	 }

	 public static String tipoToString(String st){
		 String retorno = "";
		
			 switch(st) {
				 case "int": { retorno += "int"; break; }
				 case "float": { retorno += "float"; break; }
				 case "bool": { retorno += "boolean"; break; }
				 case "char": { retorno += "char"; break; }
				
				default:
					 { retorno += "indefinido."; break; }
			 };
		 return retorno;
	 }
	public String getValor() {
		return valor;
	}
	public void setValor(String valor) {
		this.valor = valor;
	}
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public String getTipo() {
		return tipo;
	}
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
 }