#include <iostream>
using namespace std;

struct numeros{
    int numero;
    numeros *sig;
};

void menu();
void mostrar(int n1,numeros *PInicio);
void Suma(int *n1,int *x,numeros *PInicio);

void menu(){
    cout<<"1.Digitar elemenots a la lista"<<endl;
    cout<<"2.Mostrar elementos de la lista"<<endl;
    cout<<"3.Mostrar sumas de elementos pares e impares de la lista"<<endl;
    cout<<"4.Salir"<<endl;
	cout<<"Digite la opcion:";
    
}
void mostrar(int n1,numeros *PInicio){
    if(PInicio==NULL){
        return;
    }
    else{
        cout<<"Numero "<<n1<<":"<<PInicio->numero<<endl;
        return mostrar(++n1,PInicio->sig);
    }
}

void Suma(int *n1,int *x,numeros *PInicio){
    if(PInicio==NULL){
        return;
    }
    else if(PInicio->numero%2==0){
        *n1+=PInicio->numero;
        return Suma(n1,x,PInicio->sig);
    }
    else{
        *x+=PInicio->numero;
        return Suma(n1,x,PInicio->sig);
    }
}

int main(void){
    numeros *PInicio=NULL;
    numeros *nuevo=NULL;
    numeros *aux=NULL;
    int n1=0, x=0, m=0, l=0;
    do{
        menu();
        cin>>n1;
        if(n1==4){
        }
        else if(n1==1){
            x++;
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
        else if(n1==2){
            mostrar(1,PInicio);
        }
        else if(n1==3){
            Suma(&m,&l,PInicio);
            cout<<"Suma de los numeros pares es: "<<m<<endl<<"Suma de los numeros impares es: "<<l<<endl;
            m=0;
            l=0;
        }
    }while(n1!=4);
    return 0;
}
