import java.util.HashMap;
import java.util.Iterator;

public class methodsTable{
private HashMap<String,Metodos> t;
//************************
public methodsTable(){
t = new HashMap<String,Metodos>();
}
//************************
public Metodos insert(String nombre, String valor){
Metodos s = new Metodos(nombre, valor);
t.put(nombre, s);
return s;
}
//************************ 
 public Metodos search(String nombre){
return (Metodos)(t.get(nombre));
}
//************************
public void print(){

Iterator<Metodos> it = t.values().iterator();
	while(it.hasNext()){
		Metodos s = it.next();
		System.out.println(s.getname() + ": "+ s.getvalue());
	}
}

}