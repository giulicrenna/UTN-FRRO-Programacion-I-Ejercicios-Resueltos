#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    float radio, area, circunferencia;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;
    printf("El área del círculo es: %.2f\n", area);
    printf("La circunferencia del círculo es: %.2f\n", circunferencia);
    return 0;
}
