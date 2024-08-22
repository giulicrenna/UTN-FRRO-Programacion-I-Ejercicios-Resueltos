#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("El numero es par.");
    }else{
        printf("El numero es impar.");
    }

    return 0;
}