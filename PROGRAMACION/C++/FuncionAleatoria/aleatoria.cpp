#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	int resp;
	
	srand(time(NULL));
	
	resp = 1 + rand()%7;
	
	switch(resp){
	case 1: cout<<"Lunes"; break;
	case 2: cout<<"Martes"; break;
	case 3: cout<<"Miercoles"; break;
	case 4: cout<<"Jueves"; break;
	case 5: cout<<"Viernes"; break;
	case 6: cout<<"Sabado"; break;
	case 7: cout<<"Domingo"; break; 	
	}
	
	cout<<endl<<resp<<endl;
	
	
	return 0;
}








