#include <iostream>
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

//variables global
int num = 0, variable = 0;

Arbol anadiendoArbol(int x){
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
        a->izq = anadiendoArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = anadiendoArbol(unDato);
}

//AgregarNodo al arbol
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
    if(num < p->info)
        asignarIzq(p, num);
    else
        asignarDer(p, num);
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


Arbol Cambio(Arbol a){
    Arbol b=NULL;
    Arbol c=NULL;
    if(a != NULL){
        Cambio(a->izq);
        Cambio(a->der);
        b=a->der;
        c=a->izq;
        a->der=c;
        a->izq=b;
        return a;
    }
}

int main(){
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    	cin >> variable;
		    
    Arbol arbol = anadiendoArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
 cout << "Menu: \n\t1) Agregar\n\t2) Recorrer Arbol"  << "\n\t3) Recorrer y mostrar los nodos al reves/inorden \n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        system("cls");
        switch(opcion){
        	case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: arbol = Cambio(arbol); recorrerArbol(arbol);
            break;
            case 4: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
   
    return 0;
}
