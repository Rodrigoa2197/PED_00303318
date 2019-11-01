#include<iostream>
using namespace std;

int multi_recursiva(int a, int b){
	if(b==1){
		return (a);
	}else{
		return (a+multi_recursiva(a,b-1));
	}
}	

int main(){
	int a, b;
	cout << "Ingrese el primer valor: ";
		cin >> a;
	cout << "Ingrese el segundo valor: ";
		cin >> b;
	cout << "\nEl valor multiplicado es: " << multi_recursiva(a,b) <<endl;
	system("pause");
	return 0;
}
