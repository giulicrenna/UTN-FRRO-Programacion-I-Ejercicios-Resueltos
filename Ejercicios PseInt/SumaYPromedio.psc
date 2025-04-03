Algoritmo SumaYPromedio
	Definir nota, suma, contador como Real
	Definir continuar como Caracter
	
	suma <- 0
	contador <- 0
	continuar <- "S"
	
	Repetir
		Escribir "Ingrese una nota:"
		
		Leer nota
		
		suma <- suma + nota
		contador <- contador + 1
		
		Escribir "Para parar teclee (N)"
		Leer continuar
	Hasta Que continuar = "N" O continuar = "n"
	
	Si contador > 0 Entonces
		Escribir "La suma de las notas es: ", suma
		Escribir "El promedio es: ", suma / contador
	SiNo
		Escribir "No se ingresaron notas."
	FinSi
FinAlgoritmo
