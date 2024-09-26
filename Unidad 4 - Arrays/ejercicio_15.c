#include <stdio.h>

int main(){
    // "72 111 108 97 32 77 117 110 100 111"
    char cadena[] = "Hola Mundo";
    char vocales[] = "aeiouAEIOU";
    
    int contador = 0;

    for(int i = 0; cadena[i] != '\0'; i++){
        for(int j = 0; vocales[j] != '\0'; j++){
            if(cadena[i] == vocales[j]){
                contador++;
                break;
            }
        }
    }

    printf("La cadena tiene %d vocales.\n", contador);

    return 0;
}