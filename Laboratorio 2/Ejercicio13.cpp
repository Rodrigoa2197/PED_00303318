#include<iostream>
using namespace std;

int main(){
	int num, cont =0;
	
	cout << "Digite numero entero: ";
	cin >> num;
		if(num == 0){
			cout << "El valor del numero es: " << num << "\n";
		}else{
			for(int i=0; i<num; i++){
				cont = cont + i+1;
			}
		cout << "El valor es: " << cont <<"\n";
		}
	system("pause");
	return 0;
}
