#include<iostream>
#include<conio.h>
using namespace std;



int main(){
	
	int numeros[100]; 
	int aux, cant;
	
	cout<<"Dijite la cantidad de elementos a ingresar: ";
	cin>>cant;
	for(int i=0;i<cant;i++){
	cout<<"Dijite un valor: ";
	cin>>numeros[i];
	}
	
	for(int i=0;i<cant;i++){
		for(int j=0;j<cant;j++){
			if(numeros[j]>numeros[j+1]){
			aux = numeros[j];
			numeros[j] = numeros[j+1];
			numeros[j+1] = aux;
			}
		}
	}
	
	for(int i=0;i<cant;i++){
	cout<<numeros[i+1]<<" ";
	}
	
	return 0;
}








