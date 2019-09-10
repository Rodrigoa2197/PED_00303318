#include<iostream>
#include<stdlib.h>
using namespace std;

void raiz(float, float);

int main(){
	float a;
	
	while(a<0.0001){
		cout<<"Ingrese un numero: ";
			cin>>a;	
	}
	raiz(1,a);
	system("pause");
	return 0;
}

void raiz(float indice, float maximo){
	if(indice*indice<=maximo)
		raiz(indice+1, maximo);
	else{
		cout<<"la raiz cuadrada es: "<<indice-1<<endl;
	}		
}
