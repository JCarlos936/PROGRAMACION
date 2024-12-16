

#include<iostream>
#include<conio.h>
using namespace std;


class Matriz{
	private:
	int filas, columnas;
	public:
	Matriz(int,int);
	void mostrar();
};

Matriz::Matriz(int _filas, int _columnas){
	filas = _filas;
	columnas = _columnas;
}

void Matriz::mostrar(){
	int matriz[100][100];
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Dijite un valor: ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<endl<<endl;
	for(int i=0;i<filas;i++){
		cout<<endl;
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j];
		}
	}
}

int main(){
	
	int matriz[100][100];
	int filas, columnas;
	
	
	cout<<"Dijite el numero de filas: ";
	cin>>filas;
	cout<<"Dijite el numero de columnas: ";
	cin>>columnas;
	
	Matriz m = Matriz(filas, columnas);
	m.mostrar();
	return 0;
}






