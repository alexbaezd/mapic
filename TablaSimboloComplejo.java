import java.util.*;
	public class TablaSimboloComplejo{
	   HashMap  t;

	  public TablaSimboloComplejo(){
	  	t = new HashMap();
	  }

	 public SimboloComplejo insertar(String nombre, Stack st){
		 SimboloComplejo s = new SimboloComplejo(nombre, st);
		 t.put(nombre, s);
		 return s;
	 }

	 public SimboloComplejo buscar(String nombre){
	 	return (SimboloComplejo)(t.get(nombre));
	 }

	 public void imprimir(){
		 Iterator it = t.values().iterator();
		 while(it.hasNext()){
			 SimboloComplejo s = (SimboloComplejo)it.next();
			 System.out.println(s.nombre + ": " + SimboloComplejo.tipoToString(s.tipo));
		 }
	 }
 }