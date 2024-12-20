/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contarpalabras;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class ContarPalabras {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        Scanner entrada = new Scanner(System.in);
        
        String palabra;
        int respuesta;
        System.out.print("Dijite una palabra: ");
        palabra = entrada.next();
        
        respuesta = palabra.length();
        
        System.out.println(respuesta);
        
        
        
        
    }
    
}
