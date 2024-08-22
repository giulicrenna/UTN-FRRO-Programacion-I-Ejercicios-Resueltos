#include <stdio.h>

int main()
{   
    char character1;
    char character2;
    char character3;

    printf("Ingrese tres iniciales: ");

    scanf("%c %c %c", &character1, &character2, &character3);

    if (character1 != 'u') {printf("Character Incorrecto"); return 1;}
    if (character2 != 't') {printf("Character Incorrecto"); return 1;}
    if (character3 != 'n') {printf("Character Incorrecto"); return 1;}

    printf("%c\n", character1);
    printf("%c\n", character2);
    printf("%c\n\n", character3);

    printf("UTN\n");

    return 0;
}