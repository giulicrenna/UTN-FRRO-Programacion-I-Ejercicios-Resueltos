Algoritmo semana5ejercicio3
	Definir num, suma, contador Como Real
	Definir promedio como Real
	
	suma <- 0
	contador <- 0
	
	Escribir "Ingrese un número: (-1 para terminar)"
	Leer num
	
	Mientras num <> -1
		suma <- suma + num
		contador <- contador + 1
		
		Leer num
	FinMientras
	
	Si contador > 0 Entonces
		promedio <- suma / contador
		
		Escribir "Promedio: ", promedio
	Sino
		Escribir "No se ingresaron datos!"
	FinSi
	
FinAlgoritmo
