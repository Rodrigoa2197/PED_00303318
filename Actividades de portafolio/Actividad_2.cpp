#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

void desplegar(int elementos, int numeros[]){
	cout << "\nLos numeros dentro de la lista son:\n";
		for(int i = 0; i < elementos; i++){
		cout << " "<< numeros[i];
	}
	cout<<endl;
}

float mediana(int elementos, int numeros[]){
	int pos = elementos/2;
	float medi = 0.0;
		if(elementos % 2 == 0){
			medi = (float)(numeros[pos-1]+numeros[pos])/2.0;
		}
		else{
			medi = numeros[pos];	
		}
	return medi;
}

int main()
{
/*	int elementos = 8; */ //Aqui se puede modificar el numero de elementos a su gusto para la cantidad de elementos deseados
	int elementos;
	int numeros[elementos];
	int total = 0;
	cout<<"ESTE ALGORITMO DETERMINA LA MEDIANA. DEPENDIENDO LA CANTIDAD INGRESADA POR EL USUARIO.\n";
	cout<<"Ingrese la cantidad: ";
	cin>>elementos;
	
	cout<<"Ingresar los numeros ordenados de manera ascendente porfavor!\n\n";
	for(int i = 0; i < elementos; i++){
		cout << i+1 << ".Digite un numero: ";
		cin >> numeros[i];
		total += numeros[i];
	}
	
	desplegar(elementos,numeros);
	cout<<"\nEl valor de le mediana es: "<<mediana(elementos,numeros)<<endl;
	
	system("pause");
	return 0;
}
