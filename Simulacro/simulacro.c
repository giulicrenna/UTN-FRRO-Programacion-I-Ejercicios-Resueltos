#include <stdio.h>
#include <string.h>

#define M 4
#define N 5

int main() {
    int ventas[M][N];
    char sabores[M][30];
    int i, j;
    float precio;
    int opcion;

    do {
        printf("Ingrese el precio por cono: ");
        scanf("%f", &precio);
        if (precio <= 0) {
            printf("Error. El precio debe ser mayor a cero.\n");
        }
    } while (precio <= 0);

    for (i = 0; i < M; i++) {
        printf("Ingrese el nombre del sabor %d: ", i + 1);
        scanf("%s", sabores[i]);
        for (j = 0; j < N; j++) {
            printf("Ingrese cantidad de conos vendidos del sabor %s en el dia %d: ", sabores[i], j + 1);
            scanf("%d", &ventas[i][j]);
        }
    }

    // Menú
    do {
        printf("\n--- MENU ---\n");
        printf("1. Mostrar importes a facturar por cada sabor\n");
        printf("2. Mostrar el sabor con más ventas el jueves\n");
        printf("3. Mostrar datos de un sabor\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            for (i = 0; i < M; i++) {
                int total = 0;
                for (j = 0; j < N; j++) {
                    total += ventas[i][j];
                }
                printf("Sabor: %s - Total a facturar: $%.2f\n", sabores[i], total * precio);
            }
        } else if (opcion == 2) {
            int max = ventas[0][3];
            int pos = 0;
            for (i = 1; i < M; i++) {
                if (ventas[i][3] > max) {
                    max = ventas[i][3];
                    pos = i;
                }
            }
            printf("El sabor con mas ventas el jueves es: %s (%d conos)\n", sabores[pos], max);
        } else if (opcion == 3) {
            char buscado[30];
            int encontrado = -1;
            printf("Ingrese el nombre del sabor: ");
            scanf("%s", buscado);
            for (i = 0; i < M; i++) {
                if (strcmp(sabores[i], buscado) == 0) {
                    encontrado = i;
                    break;
                }
            }
            if (encontrado == -1) {
                printf("Sabor inexistente.\n");
            } else {
                printf("Ventas del sabor %s:\n", sabores[encontrado]);
                for (j = 0; j < N; j++) {
                    printf("Día %d: %d conos\n", j + 1, ventas[encontrado][j]);
                }
            }
        } else if (opcion != 4) {
            printf("Opcion invalida.\n");
        }
    } while (opcion != 4);

    return 0;
}
