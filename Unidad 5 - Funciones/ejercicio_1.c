#include <stdio.h>

int cuadrado(int a)
{
    return a * a;
}

int main()
{
    int resultado = cuadrado(4);

    printf("El resultado es: %d\n", resultado);

    return 0;
}