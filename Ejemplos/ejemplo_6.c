#include <stdio.h>


int main(){
    int num_semana;

    printf("Ingrese el numero de la semana: ");
    scanf("%d", &num_semana);

    switch (num_semana)
    {
        case 1:{
            printf("Lunes\n");
            break;
        }

        case 2:{
            printf("Martes\n");
            break;
        }

        case 3:{
            printf("Miercoles\n");
            break;
        }
        
        case 4:{
            printf("Jueves\n");
            break;
        }

        case 5:{
            printf("Viernes\n");
            break;
        }

        case 6:{
            printf("Sabado\n");
            break;
        }

        case 7:{
            printf("Domingo\n");
            break;
        }

        default:
            printf("Erroneo\n");
            break;
    }

    return 0;
}