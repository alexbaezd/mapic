public class Num {
    
    public static boolean numerico(String variable){
        try{
            Integer.parseInt(variable);
            return true;
        }catch(NumberFormatException nfe){
            return false;
        }
    }    
}