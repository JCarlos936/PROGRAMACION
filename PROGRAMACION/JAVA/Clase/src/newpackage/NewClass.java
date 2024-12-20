
package newpackage;

import java.util.Scanner;

public class NewClass {

    String nombre;
    int edad;
    
public static void main(String [] args){
    Scanner entrada = new Scanner(System.in);
    NewClass n = new NewClass();
    String x;
    int y;
    System.out.print("Dijite su nombre: ");
    x = entrada.next();
    System.out.print("Dijite su edad: ");
    y = entrada.nextInt();
    
    
    
    System.out.println("Nombre -> "+n.nombre);
    System.out.println("Edad -> "+n.edad);
    
    
}

    
}
