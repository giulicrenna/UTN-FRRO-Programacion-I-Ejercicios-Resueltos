#include <stdio.h>

/*
El tipo de dato unsigned son los numeros enteros positivos.
*/

int main(){
    int edad;

    printf("Ingresa tu edad: ");

    scanf("%d", &edad);

    if(edad >= 0 && edad <= 2){
        // [0, 2]
        printf("Eres un bebe.\n");
    }else if(edad >= 3 && edad <= 12){
        // [3, 12]
        printf("Eres un niño.\n");
    }else if(edad >= 13 && edad <= 17){
        // [13, 17]
        printf("Eres un adolescente.\n");
    }else if(edad >= 18 && edad <= 64){
        // [18, 64]
        printf("Eres un adulto.\n");
    }else if(edad >= 65){
        // [65, Inf]
        printf("Eres un adulto Mayor.\n");
    }else{
        printf("No sos humano.");
    }

    return 0;
}