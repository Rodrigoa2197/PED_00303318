#include<iostream>
using namespace std;

int recibir(int x, int low, int high, int arreglo[]);

int main(){
	int arreglo[8] = {1,3,4,5,17,18,31,33}, low = 0, high=7, x=0;
	cout <<"Digite un numero: ";
	cin >> x;
	int i = recibir(x, low, high, arreglo);
	if(i==-1)
   		cout <<"el elemento no se encontro"<<endl;
	else
 		cout << "Esta en la posicion: " << i << "\n";
}

int recibir(int x, int low, int high, int arreglo[]){
	int mid;
	
	if(low>high){
		return(-1);
	}
	mid = (low + high) / 2;
	if(x == arreglo[mid])
   		return(mid);
	if(x < arreglo[mid])
    	return recibir(x, low, mid-1, arreglo);
	else
    	return recibir(x, mid+1, high, arreglo);
}
