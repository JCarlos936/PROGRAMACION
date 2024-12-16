

#include<iostream>
#include<conio.h>
#include<math.h>/*Libreria matemática para realizar operaciones numéricas*/
using namespace std;


int base;
int exponente;

void pedirDatos();
void Operacion();

int main(){
	
	pedirDatos();
	Operacion();
		
	return 0;
}

void pedirDatos(){
	cout<<"Dijite el valor de la BASE: ";
	cin>>base;
	cout<<"Dijite el valor del EXPONENTE: ";
	cin>>exponente;
}


void Operacion(){
	
	int respuesta;
	
	respuesta = pow(base,exponente);
	/*POW es utilizado para elevar un numero a determinada potencia dijitada por el usuario*/
	
	cout<<"El valor es "<<respuesta<<endl;
	
	
}


