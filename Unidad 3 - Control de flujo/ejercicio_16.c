#include <stdio.h>

int main(){
    int num, invertido = 0, residuo;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    while(num != 0){
        residuo = num % 10;
        invertido = invertido * 10 + residuo;
        num /= 10;
    }

    printf("El numero invertido es: %d\n", invertido);

    return 0;
}