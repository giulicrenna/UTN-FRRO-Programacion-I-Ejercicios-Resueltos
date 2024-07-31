#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;
    printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);
    printf("La temperatura en Kelvin es: %.2f\n", kelvin);
    return 0;
}
