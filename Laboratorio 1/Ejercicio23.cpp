#include<iostream>
#include<conio.h>
using namespace std;

struct Complejo{
	float real;
	float imaginaria;
}complejo1, complejo2;

void datos(){
	cout << "Ingrese datos del primer complejo: \n";
	cout << "La parte Real: ";
		cin>>complejo1.real;
	cout << "La parte Imaginaria: ";
		cin>>complejo1.imaginaria;
	cout << "\nIngrese datos del segundo complejo: \n";
	cout << "La parte Real: ";
		cin>>complejo2.real;
	cout << "La parte Imaginaria: ";
		cin>>complejo2.imaginaria;
}

Complejo suma (Complejo complejo1, Complejo complejo2){
	complejo1.real +=complejo2.real;
	complejo1.imaginaria +=complejo2.imaginaria;
	return complejo1;
}


int main(){
	datos();
	Complejo resultado = suma(complejo1, complejo2);
	cout << "\nResultado de la suma: " << resultado.real << " , "<< resultado.imaginaria << "\n";
	system("pause");
	return 0;
}
