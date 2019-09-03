#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Pais{
	string nombre;
	string capital;
	int habitantes;
}africa[5], asia[5], europa[5], america[5], oceania[5];

int main(){
	int hafrica =0, hasia =0, heuropa =0, hamerica =0, hoceania =0;
	int mayor =0, mayor1 =0, mayor2 =0, mayor3 =0, mayor4= 0, global= 0; //inicializando el contador
	
	//Continente Africa
	cout <<"Ingrese datos para el continente de Africa\n\n";
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: ";
		cin >> africa[i].nombre;
		cout << "Nombre de la capital: ";
		cin >> africa[i].capital;
		cout << "Cantidad de habitantes: ";
		cin >> africa[i].habitantes; 
		hafrica +=africa[i].habitantes; //Contador para los habitantes  
		if(africa[i].habitantes>mayor){ //Identifica cual es el mayor en capital
			mayor = africa[i].habitantes;
		}
	}
	
	system("cls"); //limpiador de pantalla

	cout <<"Los datos ingresados Africa fueron los siguientes: " << endl;
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: " << africa[i].nombre << endl;
		cout << "Nombre de la capital: " << africa[i].capital << endl;
		cout << "Cantidad de habitantes: " << africa[i].habitantes << endl; 
	}
	cout << "\nLa cantidad total de poblacion del continente de Africa es: " << hafrica << "\n\n";

	////////////////////////////////////////////////////////////////////////////////////
	//Continente Asia 
	cout <<"Ingrese datos para el continente de Asia\n\n";
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: ";
		cin >> asia[i].nombre;
		cout << "Nombre de la capital: ";
		cin >> asia[i].capital;
		cout << "Cantidad de habitantes: ";
		cin >> asia[i].habitantes; 
		hasia +=asia[i].habitantes; //Contador para los habitantes  
		if(asia[i].habitantes>mayor1){
			mayor1 = asia[i].habitantes;
		}
	}
	system("cls"); //limpiador de pantalla
	cout <<"Los datos ingresados Asia fueron los siguientes: " << endl;
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: " << asia[i].nombre << endl;
		cout << "Nombre de la capital: " << asia[i].capital << endl;
		cout << "Cantidad de habitantes: " << asia[i].habitantes << endl; 
	}
	cout << "\nLa cantidad total de poblacion del continente de Asia es: " << hasia << "\n\n";
	if(mayor1>global){
		global =mayor1;
	}
	
	//////////////////////////////////////////////////////////////////////////////////
	//Continente Europa 
	cout <<"Ingrese datos para el continente de Europa\n\n";
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: ";
		cin >> europa[i].nombre;
		cout << "Nombre de la capital: ";
		cin >> europa[i].capital;
		cout << "Cantidad de habitantes: ";
		cin >> europa[i].habitantes; 
		heuropa +=europa[i].habitantes; //Contador para los habitantes  
		if(europa[i].habitantes>mayor2){ //Identifica cual es el mayor en capital
			mayor2 = europa[i].habitantes;
		}
	}
	system("cls"); //limpiador de pantalla
	cout <<"Los datos ingresados Europa fueron los siguientes: " << endl;
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: " << europa[i].nombre << endl;
		cout << "Nombre de la capital: " << europa[i].capital << endl;
		cout << "Cantidad de habitantes: " << europa[i].habitantes << endl; 
	}
	cout << "\nLa cantidad total de poblacion del continente de Europa es: " << heuropa << "\n\n";
		if(mayor2>global){
		global =mayor2;
	}
	
	/////////////////////////////////////////////////////////////////////////////////////////
	//Continente America
	cout <<"Ingrese datos para el continente de America\n\n";
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: ";
		cin >> america[i].nombre;
		cout << "Nombre de la capital: ";
		cin >> america[i].capital;
		cout << "Cantidad de habitantes: ";
		cin >> america[i].habitantes; 
		hamerica +=america[i].habitantes; //Contador para los habitantes  
		if(america[i].habitantes>mayor3){ //Identifica cual es el mayor en capital
			mayor3 = america[i].habitantes;
		}
	}
	system("cls"); //limpiador de pantalla
	cout <<"Los datos ingresados America fueron los siguientes: " << endl;
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: " << america[i].nombre << endl;
		cout << "Nombre de la capital: " << america[i].capital << endl;
		cout << "Cantidad de habitantes: " << america[i].habitantes << endl; 
	}
	cout << "\nLa cantidad total de poblacion del continente de America es: " << hamerica << "\n\n";
		if(mayor3>global){
		global =mayor3;
	}
	
	//////////////////////////////////////////////////////////////////////////////////////////
	//Continente Oceania	
	cout <<"Ingrese datos para el continente de Oceania\n\n";
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: ";
		cin >> oceania[i].nombre;
		cout << "Nombre de la capital: ";
		cin >> oceania[i].capital;
		cout << "Cantidad de habitantes: ";
		cin >> oceania[i].habitantes; 
		hoceania +=oceania[i].habitantes; //Contador para los habitantes  
		if(oceania[i].habitantes>mayor4){ //Identifica cual es el mayor en capital
			mayor4 = oceania[i].habitantes;
		}
	}
	system("cls"); //limpiador de pantalla
	cout <<"Los datos ingresados Oceania fueron los siguientes: " << endl;
	for(int i=0; i<5; i++){
		cout << "\nNombre del pais: " << oceania[i].nombre << endl;
		cout << "Nombre de la capital: " << oceania[i].capital << endl;
		cout << "Cantidad de habitantes: " << oceania[i].habitantes << endl; 
	}
	cout << "\nLa cantidad total de poblacion del continente de Oceania es: " << hoceania << "\n\n";
		if(mayor4>global){
		global =mayor4;
	}
	
	cout<< "La capital que tiene el mayor poblacione es: "<< global << endl;
	return 0; 
}
