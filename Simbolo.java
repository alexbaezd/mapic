class Simbolo{
private String nombre;
private String valor;
//*******************************************
public Simbolo(String nombre, String valor){
	this.nombre = nombre;
	this.valor = valor;
}
//*******************************************
public void setValor(String valor){
this.valor=valor;
}
//*******************************************
public String getValor(){
  return valor;
}
//*******************************************
public void setNombre(String nombre){
this.nombre=nombre;
}
//*******************************************
public String getNombre(){
  return nombre;
}
}