Proceso EjemploOn
	// Ejemplo de O(n) = n*m
	Definir n, m Como Entero
	Definir cont_1, cont_2 Como Entero
	Definir n_operaciones Como Entero
	
	n <- 4
	m <- 4
	
	n_operaciones <- 0
	cont_1 <- 0
	cont_2 <- 0
	
	Mientras  cont_1 <= n-1
		Mientras cont_2 <= m-1
			n_operaciones <- n_operaciones + 1
			cont_2 <- cont_2 + 1
		FinMientras
		
		cont_2 <- 0
		cont_1 <- cont_1 + 1
	FinMientras
	
	Escribir "Cantidad de operaciones: ", n_operaciones
FinProceso
	