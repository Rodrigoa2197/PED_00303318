#include<iostream>
using namespace std;

void calculos(int num , int *doble, int *triple){
	*doble = 2*num;
	*triple = 3*num;  
}

int main(){
	int numero = 2, doble = 0, triple = 0;
	
	calculos(numero, &doble, &triple);
	int *puntero = &doble;
	int *puntero2 = &triple;
	cout<<"\nDireccion almacenada del puntero doble es: "<<puntero<<endl;
	cout<<"Direccion almacenada del puntero triple es: "<<puntero<<endl;
	cout<<"Direccion de puntero doble es: "<<&puntero<<endl;
	cout<<"Direccion de puntero triple es: "<<&puntero<<endl;
	cout<<"Valor de variable apuntada por puntero doble es: "<<(*puntero)<<endl;
	cout<<"Valor de variable apuntada por puntero triple es: "<<(*puntero2)<<endl;
	
	system("pause");
	return 0;
}
