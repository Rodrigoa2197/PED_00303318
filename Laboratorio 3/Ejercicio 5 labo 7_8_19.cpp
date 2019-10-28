#include<iostream>
#include<stdlib.h>
using namespace std;

struct numeros{
    int numero;
    numeros *sig;
};

void menu();
void mostrarElementos(int num,numeros *PInicio);
void inverso(numeros *PInicio);


numeros *Inicio1=NULL;
numeros *Nuevo1=NULL;

int main(void){
    numeros *PInicio=NULL;
    numeros *nuevo=NULL;
    numeros *aux=NULL;
    int num=0;
    int cont=0;
    do{
        menu();
        cin>>num;
        if(num==3){
        }
        else if(num==1){
            cont++;
            nuevo=new numeros;
            cout<<"Digite el numero a agregar:";
            cin>>nuevo->numero;
            nuevo->sig=NULL;
            if(PInicio==NULL){
                PInicio=nuevo;
            }
            else{
                aux=PInicio;
                while(aux->sig!=NULL){
                    aux=aux->sig;
                }
                aux->sig=nuevo;
            }
        }
        else if(num==2){
            inverso(PInicio);
            PInicio=Inicio1;
            mostrarElementos(1,PInicio);
        }
        else{
            cout<<"Opcion invalida!"<<endl;
        }
        system("pause");
        system("CLS");
    }while(num!=3);
    return 0;
}

void menu(){
    cout<<"1.Ingresar elemento aleatorio a la lista"<<endl;
    cout<<"2.Mostrar elementos de la lista en forma inversa"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"Digite la opcion: ";
}

void inverso(numeros *PInicio){
    if(PInicio==NULL){
        return;
    }
    else{
        Nuevo1=new numeros;
        Nuevo1->numero=PInicio->numero;
        Nuevo1->sig=NULL;
        if(Inicio1==NULL){
            Inicio1=Nuevo1;
        }
        else{
            Nuevo1->sig=Inicio1;
            Inicio1=Nuevo1;
        }
        return inverso(PInicio->sig);
    }
}

void mostrarElementos(int num,numeros *PInicio){
    if(PInicio==NULL){

        return;
    }
    else{
        cout<<"Numero "<<num<<": "<<PInicio->numero<<endl;
        return mostrarElementos(++num,PInicio->sig);
    }
}
