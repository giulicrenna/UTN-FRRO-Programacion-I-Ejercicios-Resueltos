#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char cadena1[] = "listen";
    char cadena2[] = "silent";

    int len1 = strlen(cadena1);
    int len2 = strlen(cadena2);

    int son_anagramas = 1;

    if(len1 != len2){
        printf("Las palabras no son anagramas.\n");
        return 0;
    }

    for(int i = 0; i < len1 - 1; i++){
        for(int j = i + 1; j < len1; j++){
            if(cadena1[i] > cadena1[j]){
                char temp = cadena1[i];
                cadena1[i] = cadena1[j];
                cadena1[j] = temp; 
            }
            if(cadena2[i] > cadena2[j]){
                char temp = cadena2[i];
                cadena2[i] = cadena2[j];
                cadena2[j] = temp; 
            }
        }
    }

    for(int i = 0; i < len1; i++){
        if(cadena1[i] != cadena2[i]){
            son_anagramas = 0;
            break;
        }
    }

    if(son_anagramas){
        printf("Son anagramas.\n");
        return 0;
    }

    printf("No son anagramas.\n");

    return 0;
}