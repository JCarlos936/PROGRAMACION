#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Personas{
	int id;
	char nombre[100];
	int edad;
};

struct Informacion{
	char profesion[100];
	struct Personas x;
	int matricula;
	
}P[100];


int main(){
	
	int cant;
	
	cout<<"Dijite la cantidad de elementos a ingresar: ";
	cin>>cant;
	
	for(int i=0;i<cant;i++){fflush(stdin);
	cout<<"Dijite su ID: ";
	cin>>P[i].x.id;
	cout<<"Dijite su nombre: ";fflush(stdin);
	cin.getline(P[i].x.nombre,100);
	cout<<"Dijite su edad: ";fflush(stdin);
	cin>>P[i].x.edad;
	cout<<"Dijite su profesion: ";fflush(stdin);
	cin.getline(P[i].profesion,100);
	cout<<"Diite su matricula: ";fflush(stdin);
	cin>>P[i].matricula;
	
	}
	
	for(int i=0;i<cant;i++){fflush(stdin);
	cout<<"--------------DATOS DE PERSONA----------------------"<<endl;
	cout<<"ID -> "<<P[i].x.id<<endl;
	cout<<"NOMBRE -> "<<P[i].x.nombre<<endl;fflush(stdin);
	cout<<"EDAD -> "<<P[i].x.edad<<endl;	
	cout<<"PROFESION -> "<<P[i].profesion<<endl;
	cout<<"MATRICULA -> "<<P[i].matricula<<endl;
	}
	
	
	return 0;
}


