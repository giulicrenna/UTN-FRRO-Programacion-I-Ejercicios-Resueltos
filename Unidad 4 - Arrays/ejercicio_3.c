#include <stdio.h>

int main(){
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_inv[9];
    int counter = 0;

    for(int i = 9-1; i >= 0; i--){
        arr_inv[counter] = arr[i];
        counter++;
    }

    printf("Array invertido: ");

    for(int i = 0; i < 9; i++){
        printf("%d\n", arr_inv[i]);
    }

    return 0;
}