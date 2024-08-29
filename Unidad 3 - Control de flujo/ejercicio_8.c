#include <stdio.h>

int main(){
    float a, b, c;

    printf("Ingrese las medidas de tres lados: ");

    scanf("%f %f %f", &a, &b, &c);

    /*
    Primero verifcamos si las medidas corresponden a un triángulo.
    */
    if(!(a + b > c && a + c > b && b + c > a)){
        printf("Las medidas no corresponden a un triangulo.\n");
        return 0;
    }

    if(a == b && a == c && b == c){
        printf("Es un triangulo equilatero.\n");
    }else if(a != b && a != c && b != c){
        printf("Es un triangulo escaleno.\n");
    }else{
        printf("Es un triangulo isosceles.\n");
    }

    return 0;
}