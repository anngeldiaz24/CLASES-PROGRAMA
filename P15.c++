#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int valor1, valor2, valor3;
    cout<<"Ingresa el valor 1:  ";
    cin>>valor1;
    cout<<"Ingresa el valor 2:  ";
    cin>>valor2;
    cout<<"Ingresa el valor 3:  ";
    cin>>valor3;
    if((valor1 < valor2) && (valor2 < valor3)){
        cout<<"Estan en orden creciente"<<endl;
    }else{
        cout<<"No estan en orden creciente"<<endl;
    }
    return 0;
}
