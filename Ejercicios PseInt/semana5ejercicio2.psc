Algoritmo semana5ejercicio2
	Definir limite, sum, num como Real
	
	suma <- 0
	Escribir "Ingrese un valor límite."
	Leer limite
	
	Mientras limite <= 0
		Escribir "Límite debe ser positivo."
		Leer limite
	FinMientras
	
	Mientras suma <= limite
		Escribir "Ingrese un numero:"
		Leer num
		suma <- suma + num
	FinMientras
	
	Escribir "La suma es: ", suma
FinAlgoritmo
