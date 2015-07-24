public class Num {
    
    public static boolean numerico(String variable){
        try{
            Integer.parseInt(variable);
            return true;
        }catch(NumberFormatException nfe){
            return false;
        }
    }
    
    public static boolean valFloat(String var){
        try{
            Float.parseFloat(var);
            return true;
        }catch(NumberFormatException nfe){
            return false;
        }
    }
}