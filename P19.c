#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct 
{
    int idCarrera;
    char nombre[50];
}Carrera;
typedef struct 
{
    char nombre [50];
    int codigo;
    float promedio;
    int idCarrera;
    
}Alumno;



int main(int argc, char const *argv[])
{
    Carrera carreras [5];
    Alumno alumnos [5];
    int repetir = 1, opc, x = 0, y = 0, m, n;
    do{
        printf("\n\t**UNIVERSIDAD**\n");
        printf("1. Ingresar datos para aspiracion a Carrera\n2. Mostrar tramite\n3. Salir\nSeleccione una opcion:  ");
        scanf("%d",&opc);
        switch(opc){
            case 1: 
                if(x != 6 && y != 6){
                printf("Ingrese el nombre de la carrera a la que desea aspirar:  ");
                getchar();
                fgets(carreras[x].nombre,50,stdin);
                printf("Ingrese el ID de la carrera:  ");
                scanf("%d",&carreras[x].idCarrera);
                printf("Ingrese su nombre:  ");
                getchar();
                fgets(alumnos[y].nombre,50,stdin);
                printf("Ingresa tu codigo de registro:  ");
                scanf("%d",&alumnos[y].codigo);
                printf("Promedio:  ");
                scanf("%f",&alumnos[y].promedio);
                alumnos[y].idCarrera = carreras[x].idCarrera;
                x++;
                y++;
            }else{
                printf("\nNo se puede agregar otro dato");
            }
            break;
            case 2:
                m=0;
                n=0;
                if(x!=0 && y!=0){
                    while(m<x && n<y){
                        printf("\n\tTramite realizado\n");
                        printf("Nombre de la carrera: %s",carreras[m].nombre);
                        printf("ID de la carrera: %d\n",alumnos[n].idCarrera);
                        printf("Nombre del aspirante: %s",alumnos[n].nombre);
                        printf("Codigo: %d\n",alumnos[n].codigo);
                        printf("Promedio:  %.2f\n",alumnos[n++].promedio);
                        printf("Tramite hecho correctamente\n");
                }

            }
            break;
            default:
                printf("Opcion Invalida\n");
            break;
            case 3:
                repetir = 0;
                printf("SALIENDO DEL PROGRAMA...");
            break;
        }

    }while(repetir);

    return 0;
}
