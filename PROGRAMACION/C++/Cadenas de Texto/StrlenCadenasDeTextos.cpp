#include<iostream>
#include<string.h>
using namespace std;

int main(){

	char nombre[5];

	cout<<"Dijite una palabra: ";
	cin.getline(nombre,5);
	
	cout<<nombre<<endl;
	cout<<strlen(nombre);//Cuenta la cantidad de caract�res guadados en la cadena de texto
	
	return 0;
}


 

