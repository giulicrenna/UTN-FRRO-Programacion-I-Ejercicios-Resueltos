#include <stdio.h>

int main(){
    int arr[] = {1, 5, 9, 7, 8, 12, 5, 7, 18, 19, 207, 2094};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}