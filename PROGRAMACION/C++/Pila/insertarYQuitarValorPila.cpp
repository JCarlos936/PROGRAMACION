    
    
    
    /*PILAS*/

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo*siguiente;
};

void insertarPila(Nodo*pila, int n);
void sacarPila(Nodo*&pila, int &n);
int main(){
	Nodo*pila=NULL;
	int numeros[100];
	int cant, valor;
	
	cout<<"Dijite la cantidad de elementos a ingresar: ";
	cin>>cant;
	
	for(int i=0;i<cant;i++){
	cout<<"Dijite un valor: ";
	cin>>valor;
	insertarPila(pila,valor);
	}
	
	
	
	while(pila!=NULL){
	sacarPila(pila,valor);
	if(pila!=NULL){
		cout<<valor<<", ";
	}
	else{
		cout<<valor<<".";
	}
	}



	return 0;
}

void insertarPila(Nodo*pila, int n){
	Nodo*nuevo_nodo = new Nodo;
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout<<"El valor "<<n<<" fue agregado correctamente a la PILA"<<endl;
}

void sacarPila(Nodo*&pila, int &n){
	Nodo*aux=pila;
	n = aux -> dato;
	pila = aux->siguiente;	
}



    
    
