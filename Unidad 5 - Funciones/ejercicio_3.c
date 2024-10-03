#include <stdio.h>

int sumaArreglo(int *arreglo, int tamanio)
{
    int suma = 0;

    for (int i = 0; i < tamanio; i++)
    {
        suma = suma + arreglo[i];
    }

    return suma;
}

int main()
{
    int arreglo[] = {2, 4, 7, 8, 9};

    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("%d", sumaArreglo(arreglo, tamanio));

    return 0;
}