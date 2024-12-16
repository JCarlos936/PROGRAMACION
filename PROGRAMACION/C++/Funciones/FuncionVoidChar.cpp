#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


char pedirDatos(char nombre[100]);
int main(){
	char x[100];
	pedirDatos(x);
	
	return 0;
}

char pedirDatos(char nombre[100]){
	cout<<"Dijite su nombre: ";
	cin.getline(nombre,100);
	cout<<"Nombre: "<<nombre<<endl;
}






