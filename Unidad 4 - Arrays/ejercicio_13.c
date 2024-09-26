#include <stdio.h>

int main(){
    int arr[3][3] = {
        {1, 2, 1},
        {1, 1, 1},
        {1, 2, 1}
    };

    int lenDim1 = sizeof(arr) / sizeof(arr[0]);
    int lenDim2 = sizeof(arr[0]) / sizeof(arr[0][0]);

    // arr[0] -> {1, 2, 1}
    // arr[0][0] -> 1

    for(int i = 0; i < lenDim1; i++){
        int suma = 0;

        for(int j = 0; j < lenDim2; j++){
            suma += arr[i][j];
        }

        printf("La suma de la row %d es: %d\n", i + 1, suma);
    }

    return 0;
}