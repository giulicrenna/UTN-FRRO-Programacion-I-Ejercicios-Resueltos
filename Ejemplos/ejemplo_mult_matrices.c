#include <stdio.h>

void multiplicarMatrices(int mat1[][2],
                         int mat2[][2],
                         int resultado[][2],
                         int size)
{
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            resultado[i][j] = 0;

            for(int k = 0; k < size; k++){
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    /*
    Solo funciona para matrices cuadradas.
    */
    int mat1[2][2] = {{1, 1},
                      {1, 1}};

    int mat2[2][2] = {{3, 4},
                      {5, 6}};

    int resultado[2][2];

    multiplicarMatrices(mat1, mat2, resultado, 2);

    printf("Resultado de la multiplicación:\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}