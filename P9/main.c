#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grados, gradosF;
    printf("Ingresa los grados celsius:  ");
    scanf("%f",&grados);
    gradosF = 1.8 * grados + 32;
    printf("Grados Celsius: %.2f C\n",grados);
    printf("Grados Fahrenheit: %.2f F",gradosF);


    return 0;
}
