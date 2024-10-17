#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 100  // Cantidad maxima de pacientes
#define MAX_CITAS 100      // Cantidad maxima de citas
#define MAX_NAME_LEN 50    // Longitud maxima del nombre
#define MAX_DIAG_LEN 500   // Longitud máxima del diagnóstico
#define MAX_DATE_LEN 11    // Longitud máxima de la fecha (DD/MM/AAAA)
#define MAX_MOTIVO_LEN 100 // Longitud del motivo de la cita
#define MAX_TIME_LEN 6     // Longitud de la hora (HH:MM)

// Arreglos de pacientes
int idPacientes[MAX_PACIENTES];
char nombresPacientes[MAX_PACIENTES][MAX_NAME_LEN];
int edadesPacientes[MAX_PACIENTES];
char diagnosticosPacientes[MAX_PACIENTES][MAX_DIAG_LEN];

// Arreglos de citas
int idPacientesCitas[MAX_CITAS];
char fechasCitas[MAX_CITAS][MAX_DATE_LEN];
char horasCitas[MAX_CITAS][MAX_TIME_LEN];
char motivosCitas[MAX_CITAS][MAX_MOTIVO_LEN];

void ingresarPaciente(int *numPacientes)
{
    if (*numPacientes >= MAX_PACIENTES)
    {
        printf("ERROR:\t No se pueden agregar mas pacientes.");
        return;
    }

    printf("Ingrese ID: ");
    scanf("%d", &idPacientes[*numPacientes]);

    // Limpiar el buffer de la consola.
    while (getchar() != '\n');

    printf("Ingrese el nombre: ");
    // Ingresamos la cadena de caracteres dentro del array de nombres
    fgets(nombresPacientes[*numPacientes], MAX_NAME_LEN, stdin);
    // Eliminamos el salto de linea
    nombresPacientes[*numPacientes][strcspn(nombresPacientes[*numPacientes], "\n")] = 0;

    printf("Ingrese la edad: ");
    scanf("%d", &edadesPacientes[*numPacientes]);

    // Limpiar el buffer de la consola.
    while (getchar() != '\n')
        ;

    printf("Ingrese el el diagnostico: ");
    // Ingresamos la cadena de caracteres dentro del array de nombres
    fgets(diagnosticosPacientes[*numPacientes], MAX_DIAG_LEN, stdin);
    // Eliminamos el salto de linea
    diagnosticosPacientes[*numPacientes][strcspn(diagnosticosPacientes[*numPacientes], "\n")] = 0;

    (*numPacientes)++;

    return;
}

void mostrarPacientes(int numPacientes)
{
    if (numPacientes == 0)
    {
        printf("No hay pacientes registrados. \n");
        return;
    }

    for (int i = 0; i < numPacientes; i++)
    {
        printf("ID: %d, Nombre: %s, Edad: %d, Diagnostico: %s \n",
               idPacientes[i], nombresPacientes[i], edadesPacientes[i], diagnosticosPacientes[i]);
    }

    return;
}

void modificarPaciente(int numPaciente, int id){
    for(int i = 0; i < numPaciente; i++){
        if(idPacientes[i] == id){
            while (getchar() != '\n');

            printf("Modificar nombre: ");
            fgets(nombresPacientes[i], MAX_NAME_LEN, stdin);
            nombresPacientes[i][strcspn(nombresPacientes[i], "\n")] = 0;

            printf("Modificar edad: ");
            scanf("%d", &edadesPacientes[i]);

            while (getchar() != '\n');

            printf("Modificar diagnostico: ");
            fgets(diagnosticosPacientes[i], MAX_DIAG_LEN, stdin);
            diagnosticosPacientes[i][strcspn(diagnosticosPacientes[i], "\n")] = 0;

            return;
        }
    }

    printf("No se encontro el ID %d.\n", id);

    return;
}

int main()
{
    int numPacientes = 0;
    int numCitas = 0;
    int opcion;

    do
    {
        printf("1. Ingresar paciente \n");
        printf("2. Modificar paciente \n");
        printf("3. Eliminar paciente \n");
        printf("4. Mostrar pacientes \n");
        printf("5. Ingresar citas \n");
        printf("6. Modificar citas \n");
        printf("7. Eliminar citas \n");
        printf("8. Mostrar citas \n");
        printf("9. Salir \n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            ingresarPaciente(&numPacientes);
            break;
        case 2:
            printf("Ingrese el ID a modificar: ");
            
            int idPaciente;

            scanf("%d", &idPaciente);

            modificarPaciente(numPacientes, idPaciente);

            break;
        case 3:
            /* code */
            break;
        case 4:
            mostrarPacientes(numPacientes);
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            /* code */
            break;
        case 8:
            /* code */
            break;

        case 9:
            printf("Saliendo del programa...");
            break;
        default:
            printf("Opcion invalida.\n");
            break;
        }
    } while (opcion != 9);

    return 0;
}