#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, distancia;

    printf("Ingrese las coordenadas del primer punto: ");

    scanf("%f %f", &x1, &y1);

    printf("Ingrese las coordenadas del segundo punto: ");

    scanf("%f %f", &x2, &y2);

    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 -  y1, 2));

    printf("La distancia entre los dos puntos es: %f\n",distancia);

    return 0;
}