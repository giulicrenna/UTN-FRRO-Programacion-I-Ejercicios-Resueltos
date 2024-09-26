#include <stdio.h>

int main(){
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int lenArr1 = sizeof(arr1) / sizeof(arr1[0]);
    int lenArr2 = sizeof(arr2) / sizeof(arr2[0]);
    int suma = 0;

    if(lenArr1 != lenArr2){
        printf("Los array deben tener la misma longitud.\n");
        
        return 0;
    }

    for(int i = 0; i < lenArr1; i++){
        suma += arr1[i] * arr2[i];
    }

    printf("El resultado es: %d\n", suma);

    return 0;
}