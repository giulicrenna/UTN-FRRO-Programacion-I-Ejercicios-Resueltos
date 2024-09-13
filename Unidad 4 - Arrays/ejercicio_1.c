#include <stdio.h>

int main(){
    int n, sum = 0;

    printf("Ingrese el tamano del array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Ingrese elemento %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("La suma del array es: %d", sum);

    return 0;
}