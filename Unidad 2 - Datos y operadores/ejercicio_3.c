#include <stdio.h>

int main(){
    float celcius, farenheit, kelvin;

    printf("Ingrese la temperatura en grados Celcius: ");
    scanf("%f", &celcius);

    farenheit = (celcius * 9/5) + 32;
    kelvin = celcius + 273.15;

    printf("La temperatura en Celcius es: %.3f\n", celcius);
    printf("La temperatura en Farenheit es: %.3f\n", farenheit);
    printf("La temperatura en Kelvin es: %.3f\n", kelvin);

    return 0;
}