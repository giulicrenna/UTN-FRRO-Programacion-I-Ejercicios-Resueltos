#include <stdio.h>

void print_array(int arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("}\n");
}

void invertirArray(int arr[], int size){
    int temp;

    for(int i = 0; i < size / 2; i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main(){
    int numeros[] = {1, 3, 4, 6, 1, 7, 5, 3, 9, 6, 8};
    int size = sizeof(numeros) / sizeof(numeros[0]);

    invertirArray(numeros, size);

    printf("Array invertido:\n");

    print_array(numeros, size);

    return 0;
}