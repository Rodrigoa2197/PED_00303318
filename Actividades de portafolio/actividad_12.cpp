#include<iostream>
using namespace std;

struct TOrden{
	int revueltas;
        int frijolConQueso;
        int queso;
        bool arroz;
};
typedef struct TOrden Orden;

Orden solicitarOrden(){
    Orden p;
    cout << "La orden es: \n";
    cout << "De revueltas: "; cin >> p.revueltas;
    cout << "De frijol con queso: "; cin >> p.frijolConQueso;
    cout << "De queso: "; cin >> p.queso;
    cout << "Las quiere de arroz?\n1.De Arroz 0.De maiz\nOpcion: "; cin >> p.arroz;
    if(p.arroz!=0 && p.arroz!=1){
    	cout << "\nERROR! Escriba entre 0 y 1\n1.De Arroz 0.De maiz\nOpcion: ";
    	cin >> p.arroz;
	}else{
		if(p.arroz == 1){
			p.arroz = true;
	    }else if(p.arroz == 0){
			p.arroz = false;
		}
    return p;
	}
}

void mostrarOrden(Orden p){
    cout << "\nLa orden es: \n";
    cout << "De revueltas: " << p.revueltas;
    cout << "\nDe frijol con queso: " << p.frijolConQueso;
    cout << "\nDe queso: " << p.queso;
    cout << "\nLas quiere de: ";
	if(p.arroz == true){
		cout << "Arroz";
	}else if(p.arroz == false){
		cout << "Maiz";
	}
    cout << endl;
}

struct TNodo{
    Orden dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Orden p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Orden p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);
                continuar = false;
            break;
            case 2: insertarFinal(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarOrden(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver Ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
