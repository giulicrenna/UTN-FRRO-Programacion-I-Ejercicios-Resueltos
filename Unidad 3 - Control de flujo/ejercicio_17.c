#include <stdio.h>

#define FIBONACCI_HASTA

int FibonacciRecursivo(int n){
    if(n == 1){
        return 1;
    }

    if(n == 0){
        return 0;
    }

    return (FibonacciRecursivo(n-1) + FibonacciRecursivo(n-2));
}

int main(){
    int a = 0;
    int b = 1;
    int fibonacciHasta = 20;
    int resultadoSuma = 0;

    /*
    Explicacion de Fibonacci con iteracion:
    Iteracion 1:
        siguiente = a + b = 0 + 1 = 1
        a = 1
        b = siguiente = 1

    Iteracion 2:
        siguiente = a + b = 1 + 1 = 2
        a = 1
        b = siguiente = 2
    
    Iteracion 3:
        siguiente = a + b = 1 + 2 = 3
        a = 2
        b = siguiente = 3

    Iteracion 4:
        siguiente = a + b = 2 + 3 = 5
        a = 3
        b = siguiente = 5

    Iteracion 5:
        siguiente = a + b = 3 + 5 = 8
        a = 5
        b = siguiente = 8

    Iteracion 6:
        siguiente = a + b = 5 + 8 = 13
        a = 8
        b = siguiente = 13
    */
    for(int i = 0; i <= fibonacciHasta; i++){
        int siguiente = a + b;
        a = b;
        b = siguiente;

        printf("%d> %d\n", i+2, siguiente);
    }

    printf("Fibonacci en %d: %d.\n", fibonacciHasta, FibonacciRecursivo(fibonacciHasta));

    return 0;
}