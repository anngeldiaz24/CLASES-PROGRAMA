#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
    int hojas;
    char nombre [30];
    char color [30];
}Arbol;

typedef struct{
    int paginas;
    char titulo [30];
    float tiempoLectura;
}Libro;


int main(int argc, char const *argv[])
{
    Arbol arboles[5];
    Libro libros [5];
    int opc, repetir = 1, x = 0, z = 0, n, y;
    do{
        printf("1. Ingresar datos\n2. Mostrar datos\n3. Salir\n");
        printf("Selecione la opcion:  ");
        scanf("%d",&opc);
        switch(opc){
            if(x != 6 && z!=6 ){
                case 1:
                printf("\nIngreso de datos\n");
                printf("Dame el nombre del arbol: ");
                getchar();
                fgets(arboles[x].nombre,30,stdin);
                printf("\nDame el color del arbol: ");
                getchar();
                fgets(arboles[x].color,30,stdin);
                printf("\nDame el numero de hojas:  ");
                scanf("%d",&arboles[x].hojas);
                printf("\n");
                printf("Ingrese el titulo del libro:  ");
                getchar();
                fgets(libros[z].titulo,30,stdin);
                printf("\nPaginas que tiene el libro:  ");
                scanf("%d",&libros[z].paginas);
                printf("\nTiempo del lectura del libro:  ");
                scanf("%f",&libros[z].tiempoLectura);
                x++;
                z++;
            }else{
                printf("\nNo se puede agregar otro dato");
            }
            break;
                case 2:
                n=0;
                y=0;
                if(x != 0 && z!= 0){
                        while(y<x && n<z){
                            printf("Nombre del arbol: %s", arboles[y].nombre);
                            printf("Color: %s",arboles[y].color);
                            printf("Numero de hojas: %d\n",arboles[y++].hojas);
                            printf("\n");
                            printf("Titulo del libro: %s",libros[n].titulo);
                            printf("Paginas: %d\n",libros[n].paginas);
                            printf("Tiempo de lectura: %.2f\n",libros[n++].tiempoLectura);
                        }
                }
                break;
                case 3:
                    repetir = 0;
                    printf("Saliendo del programa...");

                break;
                default:
                    printf("Opcion no valida");
        }

    }while(repetir);

    return 0;
}
