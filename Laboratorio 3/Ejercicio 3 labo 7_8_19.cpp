#include <iostream>
#include <string>
using namespace std;

struct TLibro{
    string titulo;
    string numPaginas;
    TLibro *sig;
};
typedef struct TLibro Libro;

Libro solicitarLibro(){
    Libro p;
    
    //---Solicitar Titulo y numPaginas---
    cin.ignore();//Limpiando el buffer
    cout << "Titulo: "; getline(cin, p.titulo);
    cout << "Numeros de Paginas: "; getline(cin, p.numPaginas);
    
    //---Solicitar *sig del libro---
    bool continuar = true;
    do{
        char opcion = 0;
        cout << "Siguiente (c-ciencia|a-aventura|p-policial|r-romance|m-misterio): ";
        cin >> opcion;
        switch(opcion){
            case 'c': p.sig = ciencia_ficcion;   continuar = false;
            break;
            case 'a': p.sig = aventura;   continuar = false;
            break;
            case 'p': p.sig = policial;   continuar = false;
            break;
            case 'r': p.sig = romance;   continuar = false;
            break;
            case 'm': p.sig = misterio;   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    
    //---Devolver libro ya poblado---
    return p;
}

void mostrarLibro(Libro p){
    cout << "Titulo: " << p.titulo << endl;
    cout << "Numero de Paginas: " << p.numPaginas << endl;
    
    cout << "Siguiente: ";
    switch(p.sig){
        case ciencia_ficcion: cout << "Ciencia ficcion" << endl;
        break;
        case aventura: cout << "Aventura" << endl;
        break;
        case policial: cout << "Policial" << endl;
        break;
        case romance: cout << "Romance" << endl;
        break;
        case misterio: cout << "Misterio" << endl;
        break;
    }
    
}

struct TNodo{
    Libro dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Libro p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Libro p) {
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

    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;
    
    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Libro insertado con exito" << endl;
}

void agregarLibro(){
    Libro p = solicitarLibro();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarLibro(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Libro\n\t2) Ver Libros"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarLibro();
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
