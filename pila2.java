/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package pila;

import java.util.Stack;

/**
 *
 * @author postgres
 */
public class pila2
{
    Stack<frijol>p = new Stack();
    public void meter(frijol s)
    {
       //System.out.println("Esto llego: "+s.getEtq()+", "+s.getInstruccion());
        //System.out.println("Esto se metio: "+p.push(s));
        p.push(s);    
    }
    
    public void mostrar()
    {
        frijol f;
        while(!p.empty())
        {
            f=p.pop();
            System.out.println("Esto saca: "+f.getEtq()+", "+f.getInstruccion());
            System.out.println("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIII");
            
        }
    }
    
    
    
}
