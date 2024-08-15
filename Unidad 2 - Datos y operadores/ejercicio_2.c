#include <stdio.h>

#define PI 3.14159265358979323846

int main(){
    float radio, area, circunferencia;
    
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    printf("El area del circulo es: %f\n", area);
    printf("La circunferencia del circulo es: %f", circunferencia);

    return 0;
}