
#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	int vector[100];
	int cant;
	
	
	cout<<"Dijite la cantidad de elementos a ingresar: ";
	cin>>cant;
	
	for(int i=0;i<cant;i++){
		cout<<"Dijite un valor: ";
		cin>>vector[i];
	}
	
	for(int i=0;i<cant;i++){
		cout<<vector[i]<<", ";		
	}
	
	
	
	return 0;
}





