#include <stdio.h>

void potencias(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i] * arr[i]);
    }
}

void sum(int arr[], int size)
{
    int suma = 0;

    for (int i = 0; i < size; i++)
    {
        suma = suma + arr[i];
    }

    printf("La suma es: %d\n", suma);
}

int main()
{
    int arr_1[] = {1, 5, 6, 9, 14, 78};
    int arr_2[] = {1, 5, 6};
    int arr_3[] = {1, 5, 6, 1};
    int arr_4[] = {1, 5, 6, 1, 2, 3, 4, 5, 5, 4, 2, 3, 3, 7, 8, 9, 8, 7, 5, 4, 3};

    sum(arr_1, sizeof(arr_1) / sizeof(arr_1[0]));
    sum(arr_2, sizeof(arr_2) / sizeof(arr_2[0]));
    sum(arr_3, sizeof(arr_3) / sizeof(arr_3[0]));
    sum(arr_4, sizeof(arr_4) / sizeof(arr_4[0]));

    return 0;
}
