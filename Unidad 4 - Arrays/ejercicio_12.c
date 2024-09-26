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

int main(){
    int arr1[] = {1, 3, 4, 5, 8};
    int arr2[] = {4, 5, 2, 5, 1, 8, 7, 3};

    int lenArr1 = sizeof(arr1) / sizeof(arr1[0]); 
    int lenArr2 = sizeof(arr2) / sizeof(arr2[0]); 

    int concatenado[lenArr1 + lenArr2];

    for(int i = 0; i < lenArr1; i++){
        concatenado[i] = arr1[i];
    }

    for(int i = 0; i < lenArr2; i++){
        concatenado[lenArr1 + i] = arr2[i];
    }

    printf("El array concatenado es:\n");

    print_array(concatenado, lenArr1 + lenArr2);

    return 0;
}