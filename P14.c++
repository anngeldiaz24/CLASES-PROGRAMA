#include <iostream>
#define DESCUENTO 0.20

using namespace std;

int main(int argc, char const *argv[])
{
    int compra;
    cout<<"Cual fue el total de la compra: ";
    cin>>compra;
    if (compra>=50){
        compra = compra - compra * DESCUENTO;
        cout<<"Son $ "<<compra<<endl;
        return 0;
    }
    cout<<"Son $ "<<compra<<endl;
    return 0;
}
