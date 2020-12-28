#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gradosC,gradosC1,gradosF, diferencia;
    printf("Ingrese los grados Fahrenheit:  ");
    scanf("%f",&gradosF);

    printf("\n\tMetodo 1\n");
    gradosC = ((gradosF - 32)/ 2)/ 10 + (gradosF - 32)/ 2;
    printf("Grados Fahrenheit: %.2f\n",gradosF);
    printf("Grados Celsius: %.2f", gradosC);

    printf("\n\tMetodo 2\n");
    gradosC1 = (gradosF - 32)/ 1.8;
    printf("Grados Fahrenheit: %.2f\n",gradosF);
    printf("Grados Celsius: %.2f\n", gradosC1);
    printf("\n");
    diferencia = gradosC - gradosC1;
    printf("La diferencia es: %.2f",diferencia);

    return 0;
}
