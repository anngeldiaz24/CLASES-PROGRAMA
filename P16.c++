#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int ingreso;
    cout<<"Ingrese su salario de docente: ";
    cin>>ingreso;
    if(ingreso < 18000){
        ingreso = ingreso + ingreso * 0.12;
        cout<<"Su salario ha amumentado a "<<ingreso<<"pesos"<<endl;
    }else if(ingreso >= 18000 && ingreso <= 30000){
        ingreso = ingreso + ingreso * 0.08;
        cout<<"Su salario ha amumentado a "<<ingreso<<"pesos"<<endl;
    }else if(ingreso > 30000 && ingreso <= 50000){
        ingreso = ingreso + ingreso * 0.07;
        cout<<"Su salario ha amumentado a "<<ingreso<<"pesos"<<endl;
    }else{
        cout<<"Su ingreso se queda igual"<<endl;
    }


    return 0;
}
