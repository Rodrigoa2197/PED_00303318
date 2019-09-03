#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int matriz[5][5];
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			matriz[i][j] =0; // inicializando la matriz en 0
		}//columna
	}//fila
	cout << "La matriz de 5X5 inicializada en 0: \n";
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<" "<<matriz[i][j]<<" "; // inicializando la matriz en 0
		}//columna
		cout<<"\n";
	}//fila
	cout <<"\nIngrese el valor para [0][0]: ";
	cin >> matriz[0][0];
	cout <<"Ingrese el valor para [0][1]: ";
	cin >> matriz[0][1];
	cout <<"Ingrese el valor para [0][2]: ";
	cin >> matriz[0][2];
	cout <<"Ingrese el valor para [0][3]: ";
	cin >> matriz[0][3];
	cout <<"Ingrese el valor para [0][4]: ";
	cin >> matriz[0][4];
	cout <<"Ingrese el valor para [1][1]: ";
	cin >> matriz[1][1];
	cout <<"Ingrese el valor para [1][2]: ";
	cin >> matriz[1][2];
	cout <<"Ingrese el valor para [1][3]: ";
	cin >> matriz[1][3];
	cout <<"Ingrese el valor para [1][4]: ";
	cin >> matriz[1][4];
	cout <<"Ingrese el valor para [2][2]: ";
	cin >> matriz[2][2];
	cout <<"Ingrese el valor para [2][3]: ";
	cin >> matriz[2][3];
	cout <<"Ingrese el valor para [2][4]: ";
	cin >> matriz[2][4];
	cout <<"Ingrese el valor para [3][3]: ";
	cin >> matriz[3][3];
	cout <<"Ingrese el valor para [3][4]: ";
	cin >> matriz[3][4];
	cout <<"Ingrese el valor para [4][4]: ";
	cin >> matriz[4][4];
	system("cls"); //Limpiador de pantalla
	cout <<"\nLos valores, ya ingresados por el usuario...\nLa matriz diagonal superior es la siguiente: \n";
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<" "<<matriz[i][j]<<" "; // inicializando la matriz en 0
		}//columna
		cout<<"\n";
	}//fila
	system("pause");
	return 0;
}
