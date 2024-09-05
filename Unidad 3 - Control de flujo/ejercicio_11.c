#include <stdio.h>

int main(){
    int suma = 0;
    int k = 100;

    for(int index = 0; index <= k; index++){
        suma += index;
    }

    printf("Suma es: %d\n", suma);

    suma = 0;

    suma = (k*(k+1)) / 2;

    printf("Suma con Gauss: %d\n", suma);

    return 0;
}