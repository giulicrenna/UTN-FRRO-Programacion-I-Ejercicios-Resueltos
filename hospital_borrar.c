#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 100
#define MAX_CITAS 100
#define MAX_NAME_LEN 50
#define MAX_DIAG_LEN 500
#define MAX_DATE_LEN 11
#define MAX_TIME_LEN 5 // HH:mm
#define MAX_MOTIVO_LEN 100

int idPacientes[MAX_PACIENTES];
char nombresPacientes[MAX_PACIENTES][MAX_NAME_LEN];
int edadPacientes[MAX_PACIENTES];
char diagnosticoPaciente[MAX_PACIENTES][MAX_DIAG_LEN];

int idPacienteCitas[MAX_CITAS];
char horasCitas[MAX_CITAS][MAX_TIME_LEN];
char motivoCita[MAX_CITAS][MAX_MOTIVO_LEN];
char fechaCita[MAX_CITAS][MAX_DATE_LEN];

void ingresarPaciente(int *numPaciente){
    if(*numPaciente >= MAX_PACIENTES){
        printf("ERROR: se superó la cantidad de pacientes.");
        return;
    }

    printf("Ingrese un ID: ");
    scanf("%d", &idPacientes[*numPaciente]);

    while (getchar() != '\n');

    printf("Ingrese el nombre del paciente: ");
    
    fgets(nombresPacientes[*numPaciente], MAX_NAME_LEN, stdin);

    nombresPacientes[*numPaciente][strcspn(nombresPacientes[*numPaciente], "\n")] = 0;

    printf("Ingrese la edad: ");
    scanf("%d", &edadPacientes[*numPaciente]);

    while (getchar() != '\n');

    printf("Ingrese el diagnostico: ");
    
    fgets(diagnosticoPaciente[*numPaciente], MAX_DIAG_LEN, stdin);

    // Esto reemplaza el \n con un 0, para evitar salto de línea.
    diagnosticoPaciente[*numPaciente][strcspn(diagnosticoPaciente[*numPaciente], "\n")] = 0;

    (*numPaciente)++;

    return;
}


int main(){
    int numPacientes = 0;
    int numCitas = 0;
    int opcion;

    do {
        printf("1) Ingresar paciente. \n");
        printf("2) Modificar paciente. \n");
        printf("3) Eliminar paciente. \n");
        printf("4) Mostrar paciente. \n");
        printf("5) Ingresar cita. \n");
        printf("6) Modificar cita. \n");
        printf("7) Eliminar cita. \n");
        printf("8) Mostrar cita. \n");
        printf("9) Salir. \n");


        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            ingresarPaciente(&numPacientes);

            for(int i = 0; i <= numPacientes-1; i++){
                printf("ID paciente: %d \n", idPacientes[i]);
            }

            break;
        
        default:
            printf("Opcion invalida. \n");
            break;
        }

    }while(opcion != 9);


}




