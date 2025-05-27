#include <stdio.h>

int main(void){
	int dni = 43841488;
	int pass = 12345;
	float saldo = 150000.0;
	float saldoDolares = 1400.0;
	int cbu = 986323456;
	int dniIngresado = 0;
	int passIngresado = 0;
	int intentos = 1;
	int ingresaCorrectamente = 0;
	int opcion;

	printf("\n=== Bienvenido al Banco UTN ===\n");
	printf("Ingrese un DNI: ");

	scanf("%d", &dniIngresado);

	while (intentos <=3 && !ingresaCorrectamente){
		printf("Ingrese su contraseña: ");

		scanf("%d", &passIngresado);


		if (pass == passIngresado && dni == dniIngresado){
			ingresaCorrectamente = 1;
		}else{
			printf("DNI o contraseña incorrecta.\n");
			intentos++;
		}
	}

	if (!ingresaCorrectamente){
		printf("Se superó el límite de intentos.\n");
		return 1;
	}


	do{
		printf("\n\n=== Menu de Clientes ===\n");
		printf("\nBienvenido a la cuenta de: %d\n", dni);


		printf("1. Consultar saldo.\n");
		printf("2. Consultar CBU.\n");
		printf("3. Retirar dinero ARS.\n");
		printf("4. Depositar dinero ARS.\n");
		printf("5. Retirar dinero USD.\n");
		printf("6. Depositar dinero USD\n");
		printf("0. Cerrar Sesion.\n");
		
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		
		if(opcion == 1){
			printf("Su saldo es de: $%f", saldo);
		}else if(opcion == 2){
			printf("Su CBU es: %d", cbu);
		}else if(opcion == 3){
			float retirar;
			printf("Selecciono monto a extraer: ARS$");

			scanf("%f", &retirar);

			saldo = saldo - retirar;

			printf("Tu saldo operativo es de ARS$ %f", saldo);
                }else if(opcion == 4){
                        float retirar;
                        printf("Selecciono monto a ingresar: ARS$");

                        scanf("%f", &retirar);

                        saldo = saldo + retirar;

                        printf("Tu saldo operativo es: ARS$ %.2f", saldo);
                   
                }else if(opcion == 5){
                        float retirar;
                        printf("Selecciono monto a extraer: USD$");

                        scanf("%f", &retirar);

                        saldoDolares = saldoDolares - retirar;

                        printf("Tu saldo operativo es: ARS$ %.2f", saldoDolares);

                }else if(opcion == 6){
                        float retirar;
                        printf("Selecciono monto a ingresar: USD$");

                        scanf("%f", &retirar);

                        saldoDolares = saldoDolares + retirar;

                        printf("Tu saldo operativo es: ARS$ %.2f", saldoDolares);

                }else if(opcion == 0){
			printf("Cerrando sesion.\n");
		}else{
			printf("Opcion invalida, intente de nuevo.\n");
		}

	}while(opcion != 0);


	return 0;
}








