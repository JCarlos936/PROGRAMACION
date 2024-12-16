#include<iostream>
#include<string.h>
using namespace std;


int main(){

	char nombre[5];
	char nombre2[100];
	
	cout<<"Dijite una palabra: ";
	cin.getline(nombre,5);
	
	cout<<nombre<<endl;
	
	strcpy(nombre2,nombre);//Copiamos el valor de la primera cadena a la segunda
	
	cout<<nombre2;
	
	return 0;
}






