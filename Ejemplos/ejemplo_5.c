#include <stdio.h>

/*
Un if evalúa si una condicion es verdera o falsa.

En caso de ser ser verdadera ejecuta la su instrucción asociada
y en caso de ser falso, evalúa otras condiciones despues del if.
*/

int main(){
    int x = 6;

    if(x == 5){
        printf("La var es: %d\n", x);
    } else if(x == 4){
        printf("La var es: %d\n", x);
    } else {
        printf("No se cumplio ninguna condicion.\n");
    }

    printf("####################################\n");

    int a, b, c;
    a = 0;
    b = 1;
    c = 2;

    if (a == 0 && b == 5){
        printf("Entro en la condicion a == 0 || b == 5\n");
    } else if ((a != 0 || b == 1) && c == 2) {
        printf("Entro en la condicion (a != 0 || b == 1) && c == 2\n");
    }

    return 0;
}