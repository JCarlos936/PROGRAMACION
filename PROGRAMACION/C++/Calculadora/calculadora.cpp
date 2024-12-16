#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int dividir, a ,b;
class Calculadora{
	private: 
	int n1,n2;
	
	public:
	Calculadora(int, int);
	void Sumar();
	void Restar();
	void Multiplicar();
	void Division();
	void Saliendo();
};


Calculadora::Calculadora(int _n1, int _n2){
	n1 = _n1;
	n2 = _n2;
}
void Calculadora::Sumar(){
	int sumar;
	int numeros;
	cout<<"\n\n SUMA"<<endl;
	do{
	cout<<"Dijite un valor: ";
	cin>>numeros;
	sumar +=numeros;
	}while(numeros!=0);
	
	
	cout<<"La suma es "<<sumar<<endl;
	system("pause");
	system("cls");
}



void Calculadora::Restar(){
	int restar;
	int numerosResta;
	cout<<"\n\n RESTA"<<endl;
do{
	cout<<"Dijite un valor: ";
	cin>>numerosResta;
	restar = restar - numerosResta;
	}while(numerosResta!=0);
	
	
	cout<<"La resta es "<<restar<<endl;
	system("pause");
	system("cls");
	
}

void Calculadora::Multiplicar(){
	cout<<"\n\n MULTIPLICAR"<<endl;
	int multiplicar;
	int numerosMult;
do{
	cout<<"Dijite un valor: ";
	cin>>numerosMult;
	multiplicar *= numerosMult;
	cout<<"La multiplicacion es "<<multiplicar<<endl;
	}while(numerosMult!=1);	
	cout<<"La multiplicacion es "<<multiplicar<<endl;
	system("pause");
	system("cls");
}

void Calculadora::Division(){
	cout<<"\n\n DIVISION"<<endl;
	cout<<"Dijite el primer valor: ";
	cin>>n1;	
	cout<<"Dijite el segundo valor: ";
	cin>>n2;
	dividir= n1/n2;
	cout<<"La division es "<<dividir<<endl;
	system("pause");
	system("cls");
}

void Calculadora::Saliendo(){
	cout<<"\n\n Saliendo..."<<endl<<endl;
	exit(1);
}


int main(int argc, char *argv[]){
	int opcion;
	
	Calculadora c = Calculadora(a, b);  
	

	
	do{
	cout<<"Funcion a realizar: "<<endl;
	cout<<"1. Sumar"<<endl;
	cout<<"2. Restar"<<endl;
	cout<<"3. Multiplicar"<<endl;
	cout<<"4. Dividir"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Dijite una opcion: "<<endl;
	cin>>opcion;	
	switch(opcion){
	case 1:c.Sumar();break;
	case 2:c.Restar();break;
	case 3:c.Multiplicar();break;
	case 4:c.Division();break;
	case 5:c.Saliendo(); break; exit(1);
	}
}while(opcion!=5);


}













