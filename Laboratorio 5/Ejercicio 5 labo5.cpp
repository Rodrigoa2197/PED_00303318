/*Ejercicio 5: Crear un programa que solicite n�meros al usuario, buscar los valores en un
�rbol binario de b�squeda previamente construido, en caso que el valor
ingresado por el usuario se encuentre en el �rbol binario, ingresarlo en una
lista simple enlazada, caso contrario, mostrar al usuario que el valor
ingresado no existe en el �rbol. El programa dejar� de solicitar n�meros al
usuario hasta que ingrese -1, y mostrar� el promedio de la lista enlazada
construida anteriormente.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

struct Nuevo_nodo{
	int dato;
	struct Nuevo_nodo *sig;
};
typedef struct Nuevo_nodo Lista;
Lista *pInicio;

float promedio = 0; 
int aux = 0, total = 0, num = 0;
	
Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}
void insertarNuevo(int num) {
    Lista *nuevo = new Lista;
    nuevo->dato = num;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a, int numero){
    Arbol p = a;
    while(true){
        if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << " " << a->info;
    }
}

void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
    cout << "Recorrido IN orden:"; inorden(a); cout << endl;
    cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}
void mostrarLista() {
	Lista *s = pInicio;
	
    while (s != NULL) {
        cout<<" " << (s->dato) << " ";
        s = s->sig;
    }
}
float promedioLista(){
	Lista *s = pInicio;
		while (s != NULL) {
        aux = s->dato;
        promedio = promedio+aux;
        s = s->sig;
        total++;
    }
	promedio= (promedio/total);
	return promedio;
}
void proceso(Arbol a,int num){
	if(a != NULL){
        if(num == a->info){
			insertarNuevo(num);
			}
        proceso(a->izq,num);
        proceso(a->der,num);
		}

	}
void Digite(Arbol a){
		cout<<"\tEntre valores de 0 a 55 porfavor y escriba -1 para salir\n";
	do{
		cout<<"\tNumero a buscar del arbol: ";
		cin>>num;
		proceso(a,num);
	}while(num!=-1);
	
	cout<<"\nLa lista con los numeros encontrados en el arbol es :\n";
    mostrarLista();
	cout<<"\nEl promedio de la lista es: " << promedioLista() << "\n"; 
}

int main(){
    pInicio = NULL;
    
	int variable = 0;
    cout<<"Inicializando arbol..."<<endl;
    
    Arbol arbol = crearArbol(5);
    agregarNodo(arbol,2);
    agregarNodo(arbol,5);
    agregarNodo(arbol,10);
    agregarNodo(arbol,22);
    agregarNodo(arbol,23);
    agregarNodo(arbol,29);
    agregarNodo(arbol,6);
    agregarNodo(arbol,9);
    agregarNodo(arbol,49);
    agregarNodo(arbol,32);
    agregarNodo(arbol,33);
    agregarNodo(arbol,31);
    agregarNodo(arbol,12);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Buscar y sacar promedio\n\t2) Recorrer"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        system("CLS");
        switch(opcion){
            case 1: Digite(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
