#include <stdio.h>

int main(){
    float num_1, num_2, num_3, num_4, num_5;
    float suma, promedio;

    printf("Ingrese cinco numeros separados por espacio: ");
    scanf("%f %f %f %f %f", &num_1, &num_2, &num_3, &num_4, &num_5);

    suma = num_1 + num_2 + num_3 + num_4 + num_5;
    promedio = suma/5;

    printf("El promedio es: %.3f\n", promedio);

    return 0;
}