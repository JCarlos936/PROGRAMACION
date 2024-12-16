


#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


void escribirArchivo();

int main(){
	
	escribirArchivo();
	
	return 0;
}


void escribirArchivo(){
	 ofstream archivo;
	 string nombreArchivo, texto;
	  
	  cout<<"Dijite el nombre del archivo: ";
	  getline(cin,nombreArchivo);
	  archivo.open(nombreArchivo.c_str(),ios::out);
	  
	  if(archivo.fail()){
	  	cout<<"El archivo esta daniado"<<endl;
	  }
	  
	  else{
	  cout<<"Dijite el texto a ingresar: ";
	  getline(cin,texto);
	  archivo<<texto<<endl;
	  }
	  
}




