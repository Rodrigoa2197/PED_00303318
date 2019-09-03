#include<iostream>
using namespace std;

int main(){
	int i, num[10], intentos=0;
	float suma=0, promedio;
	
	while(intentos<10){
		cout << "Ingrese el "<< intentos+1 <<" valor: ";
		cin >> num[i];
		suma += num[i]; //Contador de suma de numeros
		intentos++; //Contador hasta llegar a los 10
	}	
	promedio = suma/10;
	cout << "\nLa suma de los 10 numeros es: " << suma << "\n";
	cout << "El promedio de los numeros 10 es: " << promedio << "\n";
	system("pause");
	return 0;
}
