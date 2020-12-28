#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10, c = 15, aux;
    printf("\tINTERCAMBIO DE VARIABLES\n");
    printf("Valor de a es %d\n",a);
    printf("Valor de b es %d\n",b);
    printf("Valor de c es %d\n",c);
    printf("\n");
    aux = a;
    a = c;
    c = b;
    b = aux;
    printf("Valor de a es %d\n",a);
    printf("Valor de b es %d\n",b);
    printf("Valor de c es %d\n",c);
    getchar();
    return 0;
}
