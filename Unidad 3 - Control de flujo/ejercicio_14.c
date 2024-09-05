#include <stdio.h>

int factorialRecursivo(int n){
    if(n == 1){
        return 1;
    }

    return n * factorialRecursivo(n-1);
}

int main(){
    long int n, resultado, resultadoRecursivo;
    resultado = 1;

    printf("Ingrese un numero N: ");
    scanf("%d", &n);

    for(int index = 1; index <= n; index++){
        resultado *= index;
    }

    resultadoRecursivo = factorialRecursivo(n);

    printf("El factorial iterativo es %d\n", resultado);
    printf("El factorial recursivo es: %d\n", resultadoRecursivo);

    return 0;
}