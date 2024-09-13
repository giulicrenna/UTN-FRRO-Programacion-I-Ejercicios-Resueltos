#include <stdio.h>

int main(){
    int n;

    printf("Ingrese la cantidad de elementos del array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], arrSuma[n];

    printf("Ingrese los datos del primer array: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Ingrese los datos del segundo array: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
    }

    /* 
    Otra forma de resolver el for.
    for(int i = 0; i < n; i++){
        scanf("%d", arr2[i]);
        arrSuma[i] = arr1[i] + arr2[i];
    }
    */

    for(int i = 0; i < n; i++){
        arrSuma[i] = arr1[i] + arr2[i];
    }

    printf("El array suma es: \n");

    printf("{");
    for(int i = 0; i < n; i++){
        if(i == n-1){
            printf("%d", arrSuma[i]);    
        }else{
            printf("%d, ", arrSuma[i]);
        }
    }
    printf("}\n");
    
    return 0;
}