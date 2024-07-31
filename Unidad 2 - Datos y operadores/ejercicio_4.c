#include <stdio.h>

int main() {
    float num1, num2, num3, num4, num5, suma, promedio;
    printf("Ingrese cinco números separados por espacios: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    suma = num1 + num2 + num3 + num4 + num5;
    promedio = suma / 5;
    printf("La suma es: %.2f\n", suma);
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
