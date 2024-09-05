#include <stdio.h>

int main(){
    int a, b, suma;
    a = 1;
    b = 500; 
    suma = 0;

    if(b <= a){
        printf("El rango esta mal definido.\n");
        return 0;
    }

    for(int index = a; index <= b; index++){
        if(index % 2 == 0){
            suma += index;
        }
    }

    printf("Las suma de (%d a %d) es %d.\n", a, b, suma);

    return 0;
}