#include <iostream>
#include <stack>
#include<stdlib.h>
using namespace std;

//Variables Global 
bool End=false;
bool Nop=false;
int num = 0, a = 0; //Inicializando numerales 
stack<int>nodos;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
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

void agregarNodo(Arbol a){
    cout << "Numero agregado es: ";
    cin >> num;
    Arbol p = a;

    while(true){//un lado
        if(num < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//al otro
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    //Se añade el nuevo nodo
    ///////////////////////////////
    if(num < p->info)
        asignarIzq(p, num);
    else
        asignarDer(p, num);
    ///////////////////////////////
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

void listainorden(Arbol a){
    if(a != NULL){
        listainorden(a->izq);
        nodos.push(a->info);
        listainorden(a->der);
    }
}

void arreglar(int num){
    if(!nodos.empty()){
        while(nodos.top()!=num){
            nodos.pop();
            if(nodos.empty()){
                cout<<"El elemento no se encontro!"<<endl;
                Nop=true;
                break;
            }
        }
    }
    else{
        cout<<"El arbol esta vacio!"<<endl;
    }
}

void recorrerLista(){
    while (!nodos.empty()) {
        cout << nodos.top() << endl;
        nodos.pop();
    }
}

void recorrerArbolLista(Arbol a){
    cout<<"Numero hasta el cual quiere recorrer el arbol: ";
		cin >> num;
    cout<<"Ruta de busqueda de un nodo en inorden: ";
    listainorden(a);
    arreglar(num);
    if(Nop==true){
        listainorden(a);
        Nop=false;
    }
    recorrerLista();
}

int main(){
    cout<<"Inicializando arbol...\nValor en la raiz: ";
    cin >> a;

    Arbol arbol = crearArbol(a);

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
             << "\n\t3) Ruta de busqueda a un numero por inorden por pila \n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        system("Cls");
        //system("pause");
        switch(opcion){
            case 1: agregarNodo(arbol);
                break;
            case 2: recorrerArbol(arbol);
                break;
            case 3: recorrerArbolLista(arbol);End=false;
                break;
            case 4: continuar = false;
                break;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
    }while(continuar);

    return 0;
}
