#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Datos{
	int id;
	char nombre[100];
	int edad;
}C[100];

int main(){
	
	int cant;
	
	cout<<"Dijite la cantidad de elementos a ingresar: ";
	cin>>cant;
	
	for(int i=0;i<cant;i++){fflush(stdin);
	cout<<"Dijite su ID: ";
	cin>>C[i].id;
	cout<<"Dijite su nombre: ";fflush(stdin);
	cin.getline(C[i].nombre,100);
	cout<<"Dijite su edad: ";fflush(stdin);
	cin>>C[i].edad;
	}
	
	for(int i=0;i<cant;i++){fflush(stdin);
	cout<<"--------------DATOS DE PERSONA----------------------"<<endl;
	cout<<"ID -> "<<C[i].id<<endl;
	cout<<"NOMBRE -> "<<C[i].nombre<<endl;fflush(stdin);
	cout<<"EDAD -> "<<C[i].edad<<endl;	
	}
	
	
	return 0;
}






