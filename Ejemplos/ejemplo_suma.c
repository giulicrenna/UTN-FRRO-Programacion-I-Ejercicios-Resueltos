#include <stdio.h>

int sumar(int a, int b){
    return a + b;
}

int main(){
    int resultado = sumar(15, 5);

    printf("El resultado es: %d", resultado);

    return 0;
}