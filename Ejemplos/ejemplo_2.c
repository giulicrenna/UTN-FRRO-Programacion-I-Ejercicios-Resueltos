#include <stdio.h>

int main(){
    int edad = 35;
    float notaParcial = 5.723425;
    char notaLetra = 'I';
    double pi = 3.141596;

    int anioCursada;

    anioCursada = 2023;

    printf("El anio de cursada es: %d\n", anioCursada);

    anioCursada = 2024;

    printf("El anio de cursada es: %d\n", anioCursada);

    printf("La edad es %d\n", edad);
    printf("Su nota es: %.2f\n", notaParcial);
    printf("Su en letra es: %c\n", notaLetra);
    printf("El valor de PI es %fe\n", pi);

    return 0;
}