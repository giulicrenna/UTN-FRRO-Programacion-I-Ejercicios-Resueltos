#include <stdio.h>

int main(){
    int numero = 0;

    if(numero > 0)
    {
        printf("El numero es positivo.\n");
    }

    else if(numero < 0)
    {
        printf("El numero es negativo.\n");
    }

    else if(numero == 0)
    {
        printf("El numero es cero.\n");
    }

    else
    {
        printf("No se reconoce el numero.\n");
    }

    return 0;
}