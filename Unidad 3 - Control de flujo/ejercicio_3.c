#include <stdio.h>

/*
El tipo de dato unsigned son los numeros enteros positivos.
*/

int main(){
    int nota;

    printf("Ingresa tu nota: ");
    
    scanf("%d", &nota);

    if(nota >= 0 && nota <= 30){
        // [0, 30]
        printf("Aplazado.\n");
    }else if(nota >= 31 && nota <= 59){
        // [31, 59]
        printf("Desaprobado.\n");
    }else if(nota >= 60 && nota <= 69){
        // [60, 69]
        printf("Satisfactorio.\n");
    }else if(nota >= 70 && nota <= 89){
        // [70, 89]
        printf("Muy Bueno.\n");
    }else if(nota >= 90 && nota <= 100){
        // [90, Inf]
        printf("Excelente.\n");
    }else{
        printf("El numero ingresado deber de estar en el rango [0, 100]");
    }

    return 0;
}