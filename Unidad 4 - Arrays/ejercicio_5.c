#include <stdio.h>

int main(){
    int n;
    float producto_escalar = 0;

    printf("Ingrese la cantidad de elementos del array: ");
    scanf("%d", &n);

    float arr1[n], arr2[n];

    printf("Ingrese los datos del primer array: ");

    for(int i = 0; i < n; i++){
        scanf("%f", &arr1[i]);
    }

    printf("Ingrese los datos del segundo array: ");

    for(int i = 0; i < n; i++){
        scanf("%f", &arr2[i]);
    }

    for(int i = 0; i < n; i++){
        producto_escalar += arr1[i] * arr2[i];
    }

    printf("El producto escalar es: %f\n", producto_escalar);

    return 0;
}