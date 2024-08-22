#include <stdio.h>

int main()
{   
    char character1;
    char character2;
    char character3;

    printf("Ingrese tres iniciales: ");

    scanf("%c %c %c", &character1, &character2, &character3);

    if (character1 == 'u')
    {
        printf("Caracter ingresado: %c\n", character1);
        
        if (character2 == 't')
        {
            printf("Caracter ingresado: %c\n", character2);

            if (character3 == 'n')
            {
                printf("Caracter ingresado: %c\n\n", character3);
                printf("UTN");
            }
            else
            {
                printf("Character Incorrecto");
            }
        }
        else
        {
            printf("Character Incorrecto");
        }
    }
    else
    {
        printf("Character Incorrecto");
    }

    return 0;
}