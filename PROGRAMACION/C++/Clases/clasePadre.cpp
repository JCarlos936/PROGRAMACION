  
  
  #include<iostream>
#include<conio.h>
using namespace std;

class Persona{
	private:
	int edad;
	string nombre;
	public:
	Persona(int,string);
	void informacion();		
};

Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::informacion(){
	cout<<"Nombre -> "<<nombre<<endl;
	cout<<"Edad -> "<<edad<<endl;
}

int main(){
	
	Persona p = Persona(10,"carlos");
	p.informacion();
	
	
	return 0;
}


  
  
