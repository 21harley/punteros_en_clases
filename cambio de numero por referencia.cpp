#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Hola{
	char hola[20];
	public:
	Hola();	
	void cambio(char a[]);
	void mostrar();
	void cargarDato();
};

Hola::Hola(){
	strcpy(hola," ");
}

void Hola::cambio(char a[]){
	strcpy(hola,a);
}

void Hola::mostrar(){
	cout<<"Cola: "<<hola<<endl;
}

void Hola::cargarDato(){
	cout<<"Ingrese el Hol<"<<endl;
	cin.sync();cin.getline(hola,20,'\n');
}

void intercambiar(Hola& hola1){
    
  hola1.cambio("Cambio");
	
}

int main(){
   
   Hola a;
   a.cargarDato();
	a.mostrar();
	intercambiar(a);
	a.mostrar();

	
	getch();
	return 0;
}

