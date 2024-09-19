#include <stdio.h>

int main(){
    int suma = 0;

    for(int i = 1; i <= 10; i++){
        if(i % 2 != 0){
            suma = suma + i;
        }
    }

    printf("La suma de los numeros impares es: %d\n", suma);

    return 0;
}