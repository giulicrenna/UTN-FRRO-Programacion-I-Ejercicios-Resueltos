#include <stdio.h>

int main(){
    float temperatura;

    printf("Ingrese una temperatura: ");

    scanf("%f", &temperatura);

    if(temperatura <= 0){
        printf("Frio\n");
    }else if(temperatura > 0 && temperatura <= 15){
        printf("Templado\n");
    }else{
        printf("Calido\n");
    }

    return 0;
}