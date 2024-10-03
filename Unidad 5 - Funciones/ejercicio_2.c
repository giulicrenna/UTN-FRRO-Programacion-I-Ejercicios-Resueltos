#include <stdio.h>

float maximo(float num1, float num2){
    if (num1 > num2)
    {
        return num1;
    }

    return num2;
}

int main(){
    float a, b;

    printf("ingrese el primer numero: ");
    
    scanf("%f", &a);
    
    printf("ingrese el segundo numero: ");
    
    scanf("%f", &b);

    printf("el numero maximo entre %.2f y %.2f es: %.2f\n", a, b, maximo(a, b));

    return 0;
}