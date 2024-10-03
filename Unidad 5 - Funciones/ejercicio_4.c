#include <stdio.h>

int contarPares(int arr[], int size)
{
    int contador = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};

    printf("El array tiene %d numeros pares.\n", contarPares(numeros, sizeof(numeros) / sizeof(numeros[0])));

    // &numeros[0]

    return 0;
}
