#include <stdio.h>

void intercambiar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int x = 15;
    int y = 45;

    printf("Antes: (%d, %d)\n", x, y);

    intercambiar(&x, &y);

    printf("Despues: (%d, %d)\n", x, y);

    return 0;
}