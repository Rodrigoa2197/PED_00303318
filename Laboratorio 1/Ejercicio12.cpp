#include <iostream>
using namespace std;

int main()
{
    int num, num_inv=0; 
 
    cout<< "Introduce un numero:"; 
    cin>> num; 
 
    while(num > 0){ 
        num_inv = num_inv *10 + (num % 10); 
        num = num/10; 
    }
 
    cout<<"El resultado es:" << num_inv; 
}
