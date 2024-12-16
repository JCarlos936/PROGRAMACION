#include<iostream>
using namespace std;



int main(){
	
	int num, *dir_num;//Declaramaos las variables
	
	num = 10;
	dir_num=&num; //Igualamos a la variable num como referencia
	
	cout<<"Numero -> "<<*dir_num<<endl; //Este es el valor normal
	cout<<"Direccion -> "<<&dir_num<<endl; //Este es la direccion de memoria donde se encuentra la variable
	
	
	
	return 0;
}





