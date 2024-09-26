#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char cadena[] = "Menem";
    int inicio = 0;
    int fin = strlen(cadena) - 1;
    int es_palindromo = 1;

    while(inicio < fin){
        if(toupper(cadena[inicio]) != toupper(cadena[fin])){
            es_palindromo = 0;
            break;
        }

        inicio++;
        fin--;
    }

    if(es_palindromo){
        printf("Es palindromo.\n");
        return 0;
    }

    printf("No es palindromo.\n");

    return 0;
}