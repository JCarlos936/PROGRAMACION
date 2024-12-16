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

class Hijo: public Persona{
	private:
	int dias;
	string apellido;
	public:
	Hijo(int,string,int,string);	
	void jugar();
};

Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

Hijo::Hijo(int _edad, string _nombre, int _dias, string _apellido):Persona(_edad,_nombre){
	dias = _dias;
	apellido = _apellido;
}

void Persona::informacion(){
	cout<<"Nombre -> "<<nombre<<endl;
	cout<<"Edad -> "<<edad<<endl;
}

void Hijo::jugar(){
	informacion();
	cout<<"Dias -> "<<dias<<endl;
	cout<<"Apellido -> "<<apellido<<endl;
}


int main(){
	
	
	Hijo h = Hijo(1,"carlos",12,"C");
	h.jugar();
	
	
	return 0;
}



    
    
    
    
