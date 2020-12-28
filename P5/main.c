#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main()
{
    float areaCirculo, radio;
    printf("Dame el radio del circulo: \n");
    scanf("%f",&radio);
    areaCirculo = PI * radio * radio;
    printf("El area del circulo es: %.2f\n", areaCirculo);

    return 0;
}
