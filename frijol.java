/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



/**
 *
 * @author postgres
 */
public class frijol 
{
    private String etq;
    private String instruccion;
    
    public frijol(String etq,String instr){
        this.etq=etq;
        this.instruccion=instr;
        
    }

    /**
     * @return the etq
     */
    public String getEtq() {
        return etq;
    }

    /**
     * @param etq the etq to set
     */
    public void setEtq(String etq) {
        this.etq = etq;
    }

    /**
     * @return the instruccion
     */
    public String getInstruccion() {
        return instruccion;
    }

    /**
     * @param instruccion the instruccion to set
     */
    public void setInstruccion(String instruccion) {
        this.instruccion = instruccion;
    }
}
