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

void ColaCircular(int tamano){
	cola1.maximo = tamano;
	cola1.vcola = new int[cola1.maximo];
	cola1.frente = 0;
	cola1.n = 0;
}

int entradaElemento(int dato){
	if(cola1.n==cola1.maximo){
		cout << "Cola llena\n";
	}else{
		int ubicacion = (cola1.frente+cola1.n)% cola1.maximo;
		cola1.vcola[ubicacion] = dato;
		cout << "\n Frente " << cola1.frente << " n " << cola1.n << " maximo " << cola1.maximo << " ubicacion " << ubicacion;
		cola1.n++;
	}
}

int salidaElemento(){
	int axu = cola1.vcola[cola1.frente];
	cout << "\nSale elemento: " << axu;
	cola1.frente = (cola1.frente+1)%cola1.maximo;
	cola1.n--;
	cout << " Frente " << cola1.frente << " n " << cola1.n;
}

int main(){
	//ColaCircular(tamano);
	//entradaElemento(dato);
	//salidaElemento();
	ColaCircular(10);
	entradaElemento(1); //Ingresar datos
	entradaElemento(2);
	entradaElemento(3);
	entradaElemento(4);
	entradaElemento(5);
	entradaElemento(6);
	salidaElemento(); //Sacar datos
	salidaElemento();
	salidaElemento();
	entradaElemento(7);
	entradaElemento(8);
	entradaElemento(9);
	entradaElemento(10);
	entradaElemento(11);
	entradaElemento(12);
	delete[] cola1.vcola;
	cout<<endl;
	system("pause");
	return 0;
}
