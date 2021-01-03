#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char* meses [12] ={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
    int dia, mes;
    do{
        printf("\n\t**ESTACIONES DEL ANIO**\n");
        printf("Para salir del programa oprima el numero 0 en el mes\n");
        printf("Dame un mes(en numero):  ");
        scanf("%d",&mes);
        printf("Dame un dia:  ");
        scanf("%d",&dia);

        if ((mes >= 1 && mes <= 12)){
            switch (mes){
                case 1:
                    if(dia >= 1 && dia <=31){
                        printf("Es el mes %s y la estacion es Invierno\n",meses[0]);
                    }else{
                        printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                    }
                    break;
                case 2:
                    if(dia >= 1 && dia <=28){
                        printf("Es el mes %s y la estacion de Invierno\n",meses[1]);
                    }else{
                    printf("No corresponde ninguna estacion a la fecha que usted selecciono\n"); 
                    }
                    break;
                case 3:
                    if(dia >=1 && dia <=31){
                        if(dia >=1 && dia <=20){
                            printf("Es el mes %s y la estacion es Invierno\n",meses[2]);
                        }else if(dia >=21 && dia <=31){
                            printf("Es el mes %s y la estacion es Primavera\n",meses[2]);
                        }
                    }else{
                            printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                        }
                    break;
                case 4:
                    if(dia >=1 && dia <=30){
                        printf("Es el mes %s y la estacion es Primavera\n", meses[3]);
                    }else{
                        printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                    }
                    break;
                case 5:
                    if(dia >=1 && dia <=31){
                        printf("Es el mes %s y la estacion es Primavera\n", meses[4]);
                    }else{
                        printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                    }
                    break;
                case 6: 
                    if(dia >=1 && dia <=30){
                        if(dia >=1 && dia <=20){
                            printf("Es el mes %s y la estacion es Primavera\n",meses[5]);
                        }else if(dia >=21 && dia <=30){
                            printf("Es el mes %s y la estacion es Verano\n",meses[5]);
                        }
                    }else{
                            printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                        }
                    break;
                case 7:
                    if(dia >=1 && dia <=31){
                        printf("Es el mes %s y la estacion es Verano\n", meses[6]);
                    }else{
                        printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                    }
                    break;
                case 8:
                    if(dia >=1 && dia <=31){
                        printf("Es el mes %s y la estacion es Verano\n", meses[7]);
                    }else{
                        printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                    }
                    break;
                case 9:
                    if(dia >=1 && dia <=30){
                        if(dia >=1 && dia <=22){
                            printf("Es el mes %s y la estacion es Verano\n",meses[8]);
                        }else if(dia >=23 && dia <=30){
                            printf("Es el mes %s y la estacion es Otonio\n",meses[8]);
                        }
                    }else{
                            printf("No corresponde ninguna estacion a la fecha que usted selecciono");
                        }
                    break;
                case 10:
                    if(dia >=1 && dia <=31){
                        printf("Es el mes %s y la estacion es Otonio\n", meses[9]);
                    }else{
                        printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                    }
                    break;
                case 11:
                    if(dia >=1 && dia <=30){
                        printf("Es el mes %s y la estacion es Otonio\n", meses[10]);
                    }else{
                        printf("No corresponde ninguna estacion a la fecha que usted selecciono\n");
                    }
                    break;
                case 12:
                    if(dia >=1 && dia <=31){
                        if(dia >=1 && dia <=20){
                            printf("Es el mes %s y la estacion es Otonio\n",meses[11]);
                        }else if(dia >=21 && dia <=31){
                            printf("Es el mes %s y la estacion es Invierno\n",meses[11]);
                        }
                    }else{
                            printf("No corresponde ninguna estacion a la fecha que usted selecciono");
                        }
                    break;
                default:
                printf("Opcion Invalida\n");
                break;           
                }
            }else{
                printf("El mes que seleccionaste no existe");
            }   

        }while(mes != 0);
        
        return 0;
    }
