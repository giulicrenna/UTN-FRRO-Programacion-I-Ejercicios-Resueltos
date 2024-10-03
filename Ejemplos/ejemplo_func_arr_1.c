#include <stdio.h>

int sumarElementos(int arr[], int size){
    int suma = 0;

    for(int i = 0; i < size; i++){
        suma += arr[i];
    }

    return suma;
}

int main(){
    int numeros[] = {1, 2, 3, 4, 5};
    int size = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = sumarElementos(numeros, size);

    printf("El resultado es: %d\n", resultado);    

    return 0;
}

