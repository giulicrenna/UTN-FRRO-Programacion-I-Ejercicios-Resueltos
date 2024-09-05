#include <stdio.h>

int main(){
    int k = 20;

    for(int index = 1; index <= k; index++){
        if(index % 2 == 0){
            printf("%d Es par\n", index);
            continue;
        }

        printf("%d Es impar\n", index);
    }

    return 0;
}