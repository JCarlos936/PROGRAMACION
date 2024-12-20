/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vector;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class Vector {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner entrada = new Scanner(System.in);
        
        int[] vector = new int[100];//Inicializamos el vector
        int cant; //Esta es la variable con la que controlaremos la cantidad de elementos a ingresar
        
        System.out.print("Dijite la cantidad de elementos a ingresar: "); //Pedimos la cantidad a ingresar
        cant = entrada.nextInt(); //Guardamos el valor
        
        for(int i=0;i<cant;i++){ //Rellenando el vector
            System.out.print("Dijite un valor: ");
            vector[i] = entrada.nextInt();
        }
        
        for(int i=0;i<cant;i++){//Mostramos los valores del vector
            System.out.print(" "+vector[i]);
        }
        
        
        
        
        
    }
    
}
