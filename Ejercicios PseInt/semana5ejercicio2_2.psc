Algoritmo semana5ejercicio2_2
	Definir lado como Entero
	Definir fila como Cadena
	
	Escribir "Escriba el tamaño del lado"
	Leer lado
	
	Para i <- 1 Hasta lado Hacer
		fila <- ""
		Para j <- 1 Hasta lado Hacer
			Si i = 1 O i = lado O j = 1 O j = lado Entonces
				fila <- fila + "* "
			Sino
				fila <- fila + "  "
			FinSi
		FinPara
		
		Escribir fila
	FinPara
FinAlgoritmo
