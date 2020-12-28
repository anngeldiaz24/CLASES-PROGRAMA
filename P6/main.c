#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Ingrese el valor para a: \n");
    scanf("%d",&a);
    printf("Ingrese el valor para b: \n");
    scanf("%d",&b);
    printf(" a + b = %d\n",a+b);
    printf(" a - b = %d\n",a-b);
    printf(" b - a = %d\n",b-a);
    printf(" a * b = %d\n",a*b);
    printf(" a / b = %d\n",a/b);
    printf(" b / a = %d\n",b/a);
    printf(" a %% b = %d\n",a%b);
    printf(" b %% a = %d\n",b%a);

    return 0;
}
