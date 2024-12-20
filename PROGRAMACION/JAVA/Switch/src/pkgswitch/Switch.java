/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgswitch;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class Switch {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
         Scanner entrada = new Scanner(System.in);
        
        int opcion;
        
            
        do{
            //MOSTRAMOS LAS OPCIONES POR PANTALLA 
            System.out.println("");
            System.out.println("1. LUNES");
            System.out.println("2. MARTES");
            System.out.println("3. MIERCOLES");
            System.out.println("4. JUEVES");
            System.out.println("5. VIERNES");
            System.out.println("6. SABADO");
            System.out.println("7. DOMINGO");
            System.out.println("8. SALIR");
            System.out.println("Dijite una opcion: ");
            opcion = entrada.nextInt();   
         switch(opcion){ //SELECCIONANDO UNA OPCION CON LA SENTENCIA SWITCH
                case 1: System.out.print("\n LUNES\n"); break;
                case 2: System.out.print("\n MARTES\n"); break;
                case 3: System.out.print("\n MIERCOLES\n"); break;
                case 4: System.out.print("\n JUEVES\n"); break;
                case 5: System.out.print("\n VIERNES\n"); break;
                case 6: System.out.print("\nSABADO\n"); break;
                case 7: System.out.print("\n DOMINGO\n"); break;
                case 8: System.out.print("\n SALIENDO DEL PROGRAMA\n"); break;
                
            }   
        }while(opcion!=8); //CONDICIONAL PARA LAS OPCIONES
        
        
        
        
        
        
    }
    
}
