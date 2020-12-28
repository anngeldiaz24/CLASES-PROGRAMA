#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main()
{
    float areaCirculo, radio;
    radio = 5;
    areaCirculo = PI * radio * radio;
    printf("El area del circulo es: %.2f", areaCirculo);
    return 0;
}
