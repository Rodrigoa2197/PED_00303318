#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int tamano, dato;

struct ColaCircular{
	int frente;
	int maximo;
	int n;
	int *vcola;
}cola1;

int ColaCircular(int tamano){
	cola1.maximo = tamano;
	cola1.vcola = new int[cola1.maximo];
	cola1.frente = 0;
	cola1.n = 0;
}

int entradaElemento(int dato){
	if(cola1.n==cola1.maximo){
		cout << "Cola llena";
	}else{
		int ubicacion = (cola1.frente+cola1.n)% cola1.maximo;
		cola1.vcola[ubicacion] = dato;
		cout << " Frente " << cola1.frente << " n " << cola1.n << " maximo " << cola1.maximo << " ubicacion " << ubicacion;
		cola1.n++;
	}
}

int salidaElemento(){
	int axu = cola1.vcola[cola1.frente];
	cout << "Sale elemento: " << axu;
	cola1.frente = (cola1.frente+1)%cola1.maximo;
	cola1.n--;
	cout << "Frente " << cola1.frente << "n " << cola1.n;
}

int main(){
	ColaCircular(tamano);
	entradaElemento(dato);
	salidaElemento();
	ColaCircular objCircular = new int ColaCircular(10);
	objCircular.entradaElemento(1); //Ingresar datos
	objCircular.entradaElemento(2);
	objCircular.entradaElemento(3);
	objCircular.entradaElemento(4);
	objCircular.entradaElemento(5);
	objCircular.entradaElemento(6);
	objCircular.salidaElemento(); //Sacar datos
	objCircular.salidaElemento();
	objCircular.salidaElemento();
	objCircular.entradaElemento(7);
	objCircular.entradaElemento(8);
	objCircular.entradaElemento(9);
	objCircular.entradaElemento(10);
	objCircular.entradaElemento(11);
	objCircular.entradaElemento(12);
	delete[] cola1.vcola;
	system("pause");
	return 0;
}
