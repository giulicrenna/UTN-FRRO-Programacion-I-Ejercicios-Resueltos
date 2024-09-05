#include <stdio.h>

int main(){
    int a, limite;
    limite = 20;

    printf("Ingrese un numero para calcular su tabla: ");
    scanf("%d", &a);

    for(int i = 1; i <= limite; i++){
        int res = a * i;

        printf("%d X %d = %d\n", a, i, res);
    }

    return 0;
}