#include <stdio.h>

int main(){
    float num1, num2, resultado;
    int mantener = 1;
    int opcion;

    while (mantener == 1)
    {
        printf("--- CALCULADORA ---\n");
        printf("Ingrese la opcion\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("5) Salir\n> ");

        scanf("%d", &opcion);

        if (opcion == 5) {printf("Saliendo del programa"); mantener = 0; break;}

        printf("Ingrese dos numeros: ");
        scanf("%f %f", &num1, &num2);

        switch (opcion)
        {
        case 1: {
            resultado = num1 + num2;
            break;
        }
        case 2: {
            resultado = num1 - num2;
            break;
        }
        case 3: {
            resultado = num1 * num2;
            break;
        }
        case 4: {
            if(num2 == 0){
                printf("Division por cero.\n");
                resultado = 0;
                break;
            }

            resultado = num1 / num2;

            break;
        }
        
        default:
            printf("Ingrese una opcion válida, por favor.\n");
            break;
        }

        printf("El resultado es %f\n", resultado);
    }

    return 0;
}