#include <stdio.h>

int main(){
    int anio;

    printf("Ingrese el año: ");
    scanf("%d", &anio);

    if (anio % 4 == 0 && (!(anio % 100 == 0) || (anio % 400 == 0))){
        printf("Es bisiesto.\n");
    }else{
        printf("No es bisiesto.\n");
    }

    return 0;
}