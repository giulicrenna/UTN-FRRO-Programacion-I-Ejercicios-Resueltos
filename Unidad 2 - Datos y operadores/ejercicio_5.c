#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;
    printf("Ingrese las coordenadas del primer punto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Ingrese las coordenadas del segundo punto (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("La distancia entre los dos puntos es: %.2f\n", distancia);
    return 0;
}
