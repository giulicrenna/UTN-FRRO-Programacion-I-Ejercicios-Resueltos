#include <stdio.h>

int main()
{
    int suma = 0;
    int array[3][3][3] = {
        {
            {61, 2, 3},
            {44, 25, 6},
            {7, 8, 79}
            },
        {
            {110, 11, 12},
            {13, 414, 15},
            {16, 17, 178}
            },
        {
            {19, 20, 251},
            {22, 323, 24},
            {225, 26, 27}
            }
        };

    int len1 = sizeof(array) / sizeof(array[0]);
    int len2 = sizeof(array[0]) / sizeof(array[0][0]);
    int len3 = sizeof(array[0][0]) / sizeof(array[0][0][0]);

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            for (int l = 0; l < len3; l++)
            {
                suma += array[i][j][l];
            }
        }
    }

    printf("%d es la suma de los elementos del array", suma);
    return 0;
}
