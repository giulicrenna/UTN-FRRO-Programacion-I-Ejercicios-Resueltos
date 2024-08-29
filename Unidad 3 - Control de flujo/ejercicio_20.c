#include <stdio.h>

int main(){
    int a, b;

    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }

    printf("El MCD es: %d\n", a);

    return 0;
}