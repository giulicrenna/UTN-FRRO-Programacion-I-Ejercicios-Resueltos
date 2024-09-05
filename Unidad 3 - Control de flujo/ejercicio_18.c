#include <stdio.h>

int main(){
    int num, contador = 0;

    printf("Ingrese un numero para contar digitos: ");
    scanf("%d", &num);

    if(num == 0){
        contador += 1;
        
        printf("El numero tiene %d digitos.\n", contador);
        return 0;
    }

    while(num != 0){
        num /= 10;
        contador++;
    }

    printf("El numero tiene %d digitos.\n", contador);

    return 0;
}