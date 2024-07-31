#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d es un número par.\n", num);
    } else {
        printf("%d es un número impar.\n", num);
    }
    return 0;
}
