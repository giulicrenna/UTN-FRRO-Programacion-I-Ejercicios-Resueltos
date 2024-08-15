#include <stdio.h>
#include <math.h>

int main(){
    double lado_1, lado_2, hipotenusa, perimetro, superficie;

    printf("Ingrese el cateto 1 del triangulo: ");
    scanf("%lf", &lado_1);

    printf("Ingrese el cateto 2 del triangulo: ");
    scanf("%lf", &lado_2);

    hipotenusa = pow(lado_1*lado_1 + lado_2*lado_2, 1.0/2.0);
    perimetro = lado_1 + lado_2 + hipotenusa;
    superficie = lado_1 * lado_2 / 2;

    printf("La hipotenusa del triangulo es: %lf\n", hipotenusa);
    printf("El perimetro del triangulo es: %lf\n", perimetro);
    printf("La superficie del triangulo es: %lf", superficie);

    return 0;
}