import java.util.*;
public class TablaDatos{
	 HashMap<String,DatoSimbolo> t;
	 public TablaDatos(){
	 	t = new HashMap<String,DatoSimbolo>();
	 }


	 public DatoSimbolo insertar(String nombre, String st,String valor){
		 DatoSimbolo s = new DatoSimbolo(nombre, st,valor);
		 t.put(nombre, s);
		 return s;
	 }

	 public DatoSimbolo buscar(String nombre){
	 	return t.get(nombre);
	 }

	public void imprimir(){
		 Iterator<DatoSimbolo> it = t.values().iterator();

		 while(it.hasNext()){
			 DatoSimbolo s = it.next();
			// System.out.println("DatoSimbolo "+s.getNombre() + ": " + DatoSimbolo.tipoToString(s.getTipo())+" Valor  "+s.getValor());
			// System.out.println(DatoSimbolo.tipoToString(s.getTipo())+" "+ s.getNombre()+";");
		 }
	 }


}
