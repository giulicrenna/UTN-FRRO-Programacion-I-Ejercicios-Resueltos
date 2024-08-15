#include <stdio.h>

int main(){
    int a, b;
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    printf("Antes del SWAP: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Despues del SWAP: a = %d, b = %d", a, b);

    return 0;
}