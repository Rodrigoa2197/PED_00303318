#include<iostream>
#include<malloc.h>
using namespace std;

struct nodo{
	float elemento;
	struct nodo *siguiente;
};
typedef struct nodo *Pila;

void initialize(Pila *s){
	*s=NULL;
}

bool empty(Pila *s){
	return *s==NULL;
}

void push(Pila *s, float e){
	struct nodo *unNodo;
	unNodo=(struct nodo *)malloc(sizeof(struct nodo));
	unNodo->elemento=e;
	unNodo->siguiente=*s;
	*s=unNodo;
}

float pop(Pila *s){
	if(!empty(s)){
		struct nodo *unNodo=*s;
		float e=(*s)->elemento;
		*s=(*s)->siguiente;
		delete(unNodo);
		return e;
	}
	else{
		cout<<"Underflow!"<<endl;
		return -1;
	}
}

float top(Pila *s){
	if(!empty(s)){
		float e=(*s)->elemento;
		return e;
	}
	else{
		cout<<"Underflow!"<<endl;
		return -1;
	}
}

int main()
{
	Pila unaPila;
	initialize(&unaPila);
	
	push(&unaPila, 1);
	push(&unaPila, 2);
	push(&unaPila, 3);
	
	cout<<"Elementos de la pila: "<<endl<<"3"<<endl<<"2"<<endl<<"1"<<endl;
	
	cout<<endl<<"TOP"<<endl;
    cout<<"top: "<<top(&unaPila)<<endl;
    
    cout<<endl<<"POP"<<endl;
    cout<<"pop: "<<pop(&unaPila)<<endl;
    cout<<"pop: "<<pop(&unaPila)<<endl;
    
    cout<<endl<<"El ultimo elemento al fondo es: "<<pop(&unaPila)<<endl;
    
    return 0;
}
