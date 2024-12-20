/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matriz;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class Matriz {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
         Scanner entrada = new Scanner(System.in);
        
        int[][] matriz = new int[100][100];//Inicializamos la matriz
        int filas, columnas;//Declaramos las variables de filas y columnas 
        
        //Pedimos la cantidad de filas y columna para la matriz
        System.out.print("Dijite la cantidad de filas: ");
        filas = entrada.nextInt();
        System.out.print("Dijite la cantidad de columnas: ");
        columnas = entrada.nextInt();
        
        for(int i=0;i<filas;i++){//Rellenamos la matriz
            for(int j=0;j<columnas;j++){
                System.out.print("Dijite un valor: ");
                matriz[i][j] = entrada.nextInt();
            }
        }
        
        
        for(int i=0;i<filas;i++){//Mostramos la matriz
                System.out.println("");
            for(int j=0;j<columnas;j++){
                System.out.print(matriz[i][j]);
            }
        }
        
        System.out.println("");
        System.out.println("");
        
        
        
        
        
        
        
        
    }
    
}
