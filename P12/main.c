#include <stdio.h>
#include <stdlib.h>
#define MAXIMO_ASISTENCIAS 34

int main()
{
    float faltas, asistencias;
    printf("\n\t**ASISTENCIAS**\n");
    printf("Cuantas faltas tuvo durante el periodo escolar?  ");
    scanf("%f",&faltas);
    asistencias = ((MAXIMO_ASISTENCIAS - faltas) * 100)/ MAXIMO_ASISTENCIAS;
    printf("Tu %% de asistencia es del: %.2f", asistencias);


    return 0;
}
