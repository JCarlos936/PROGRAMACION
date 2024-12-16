#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;


void escribirArchivo();
void leerArchivo();
int main(){
	
	int opcion;
	
	do{
	
	cout<<"1. Escribir Archivo: "<<endl;fflush(stdin);
	cout<<"2. Leer Archivo: "<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Dijite una opcion: ";fflush(stdin);
	cin>>opcion;
	
	switch(opcion){
	case 1: escribirArchivo(); system("pause"); break;	
	
	case 2: leerArchivo(); system("pause"); break;
	case 3: cout<<"Saliendo..."<<endl; system("pause"); break;
	default: cout<<"Dijite una opcion: ";
	}
	system("cls");
	}while(opcion!=3);
	
	return 0;
}


void escribirArchivo(){
	 ofstream archivo;
	 string nombreArchivo, texto;
	  
	  cout<<"Dijite el nombre del archivo: ";fflush(stdin);
	  getline(cin,nombreArchivo);
	  archivo.open(nombreArchivo.c_str(),ios::out);
	  
	  if(archivo.fail()){
	  	cout<<"El archivo esta daniado"<<endl;
	  }
	  
	  else{
	  cout<<"Dijite el texto a ingresar: ";fflush(stdin);
	  getline(cin,texto);
	  archivo<<texto<<endl;
	  }
	  
}



void leerArchivo(){
	
	ifstream archivoLectura;
	string nombreLectura, llegada;
	
	cout<<"Dijite el nombre del archivo a abrir: ";fflush(stdin);
	getline(cin,nombreLectura);
	
	archivoLectura.open(nombreLectura.c_str(),ios::in);
	
	if(archivoLectura.fail()){
		cout<<"Error"<<endl;fflush(stdin);
	}
	
	
	while(!archivoLectura.eof()){fflush(stdin);
	getline(archivoLectura,llegada);
	cout<<llegada<<endl;
	}
	
	
}





    
    
    
    
    
