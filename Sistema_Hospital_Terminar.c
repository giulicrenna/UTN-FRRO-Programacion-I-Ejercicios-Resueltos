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

void eliminarPaciente(int *numPacientes, int idEliminar){
    if(*numPacientes <= 0){
        printf("No hay pacientes para eliminar.\n");
        return;
    }
    for(int i = 0; i < *numPacientes; i++){
        if(idPacientes[i] == idEliminar){
            for(int j = i; j < *numPacientes - 1; j++){
                idPacientes[j] = idPacientes[j + 1];
                strcpy(nombresPacientes[j], nombresPacientes[j + 1]);
                edadPacientes[j] = edadPacientes[j + 1];
                strcpy(diagnosticoPaciente[j], diagnosticoPaciente[j + 1]);
            }
            (*numPacientes)--;
            printf("Paciente eliminado.\n");
            return;
        }
    }
    printf("ID de paciente no encontrado.\n");
}

void modificarPaciente(int *numPacientes, int* id){
    for (int i = 0; i < *numPacientes; i++){
        if (idPacientes[i] == *id){
            while (getchar() != '\n');
            
            printf("Ingrese el nombre del paciente: ");
        
            fgets(nombresPacientes[i], MAX_NAME_LEN, stdin);
    
            nombresPacientes[i][strcspn(nombresPacientes[i], "\n")] = 0;
    
            printf("Ingrese la edad: ");
            scanf("%d", &edadPacientes[i]);
    
            while (getchar() != '\n');
    
            printf("Ingrese el diagnostico: ");
            
            fgets(diagnosticoPaciente[i], MAX_DIAG_LEN, stdin);
    
            // Esto reemplaza el \n con un 0, para evitar salto de línea.
            diagnosticoPaciente[i][strcspn(diagnosticoPaciente[i], "\n")] = 0;

            printf("Paciente modificado correctamente.\n");
            
            return;
        }
    }

    printf("No se encontro el paciente con ID: %d", *id);

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
        printf("ID: %d, Nombre: %s, Edad: %d, Diagnostico: %s \n", idPacientes[i], nombresPacientes[i], edadPacientes[i], diagnosticoPaciente[i]);
    }
    
    return;
}

int main(){
    int numPacientes = 0;
    int numCitas = 0;
    int opcion;

    do {
        printf("\n1) Ingresar paciente. \n");
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

            break;

        case 2:
            int idModificar;

            printf("Ingrese un ID para modificar:");
            scanf("%d", &idModificar);
            
            modificarPaciente(&numPacientes, &idModificar);

            break;

        case 3:
            int idEliminar;

            printf("Ingrese un ID para eliminar:");
            scanf("%d", &idEliminar);

            eliminarPaciente(&numPacientes, idEliminar);

            break;
        
        case 4:
            mostrarPacientes(numPacientes);

        default:
            printf("Opcion invalida. \n");
            break;
        }

    }while(opcion != 9);

}






