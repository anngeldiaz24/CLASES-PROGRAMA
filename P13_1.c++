#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int actividades[10];
    string nombre; 
    float promedio=0;
    cout<<"Dame el nombre:  ";
    cin>>nombre;
    for(int i = 0; i<10; i++){
        cout<<"Ingresa la calificacion de la actividad "<<i+1<<":";
        cin>>actividades[i];
        promedio+=actividades[i];
    }
    promedio /=10;
    cout<<nombre<<" tu promedio es "<<promedio<<endl;

    return 0;
}

