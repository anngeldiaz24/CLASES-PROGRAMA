#include <stdio.h>
#include <stdlib.h>

int main()
{
    int areaTriangulo, base, altura;
    printf("Dame la base del triangulo: \n");
    scanf("%d",&base);
    printf("Dame la altura del triangulo: \n");
    scanf("%d",&altura);
    areaTriangulo = (base * altura)/2;
    printf("El area de su triangulo es: %d",areaTriangulo);

    return 0;
}
