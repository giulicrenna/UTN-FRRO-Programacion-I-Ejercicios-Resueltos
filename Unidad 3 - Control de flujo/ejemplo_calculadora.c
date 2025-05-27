
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
 * Ejercicio Calculadora
 *
 * Debe cumplir con los siguientes requisitos:
 * 1. Sumar.
 * 2. Restar.
 * 3. Multiplicar.
 * 4. Dividir.
 * 5. Realizar raíz cuadrada.
 * 6. Debe realizar la n-ésima potencia de un numero determinado.
 * 7. Debe tener un menú con condición de salida.
 */


int main(void){
	int opcion, n;
	double a, b, resultado;


	do {
		printf("\n=== Calculadora ===\n");
		printf("1. Sumar\n");
		printf("2. Restar\n");
		printf("3. Multiplicar\n");
		printf("4. Dividir\n");
		printf("5. Raiz Cuadrada\n");
		printf("6. Potencia n-esima\n");
		printf("0. Salir\n\n");
		printf("Selecciones una opcion: ");


		if(scanf("%d", &opcion) != 1){
			printf("Entrada no valida, intentelo de nuevo!\n");
		
			while(getchar() != '\n');
			continue;	
		}
		

		switch(opcion) {
			case 1:
				printf("Ingrese dos numeros:");
				scanf("%lf %lf", &a, &b);
				resultado = a + b;
				printf("El resultado es: %.2f\n", resultado);
				break;
			case 2:
				printf("Ingrese dos numeros:");
                                scanf("%lf %lf", &a, &b);
                                resultado = a - b;
                                printf("El resultado es: %.2f\n", resultado);
                                break;
			case 3:
                                printf("Ingrese dos numeros:");
                                scanf("%lf %lf", &a, &b);
                                resultado = a * b;
                                printf("El resultado es: %.2f\n", resultado);
                                break;
			case 4:
				printf("Ingrese dos numeros:");
                                scanf("%lf %lf", &a, &b);
				if(b == 0){
					printf("Error. Division por cero\n");
				}else{
					resultado = a / b;
					printf("El resultado es: %.2f\n", resultado);
				}
				break;
			case 5:
				printf("Ingrese un numero:");
                                scanf("%lf", &a);

				if(a < 0){
					printf("opcion invalida, no se puede realizar la raiz de un negativo.");
				}else{
					resultado = sqrt(a);
					printf("El resultado es: %.2f\n", resultado);
				}
				break;
			case 6:
				printf("Ingrese dos numeros:");
                                scanf("%lf %lf", &a, &b);

				resultado = pow(a, b);
				printf("El resultado es: %.2f\n", resultado);
				break;
			case 0:
				printf("Saliendo...\n");
				break;
			default:
				printf("Opcion no valida.");

		}
	}while(opcion != 0);


	return 0;
}









