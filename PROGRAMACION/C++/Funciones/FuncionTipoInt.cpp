#include<iostream>
#include<conio.h>
using namespace std;
/*Funcion que multiplique dos numeros usando parámetros*/

void perdirDatos();
int multiplicacion(int n1, int n2);

int n1, n2; /*Variable global, esto nos ayuda a inicializarla una sola vez para todo el programa*/
  
int main(){
	perdirDatos();
	multiplicacion(n1,n2);	
	return 0;
}


void perdirDatos(){
	cout<<"Dijite el primer valor: ";
	cin>>n1;
	cout<<"Diite el segundo valor: ";
	cin>>n2;
}

int multiplicacion(int a, int b){
	int mult;
	
	mult = a*b;
	cout<<"Multiplicacion: "<<mult;
	return mult;
}






