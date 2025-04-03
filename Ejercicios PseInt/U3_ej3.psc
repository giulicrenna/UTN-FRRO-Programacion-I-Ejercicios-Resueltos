Proceso  SumarDiezNumeros
	Definir num, suma Como Real
	Definir  contador Como Entero
	
	suma <- 0
	contador <- 0
	
	Mientras contador < 10 Hacer
		Escribir contador + 1, ") Ingrese un numero real positivo."
		
		Repetir
			Leer num
			
			Si num < 0
				Escribir "Numero inválido tiene que ser mayor a cero."
			FinSi
		Hasta Que num > 0
		
		suma <- suma + num
		contador <- contador + 1
	FinMientras
	
	Escribir  "La suma de los 10 numeros ingresados es: ", suma
FinProceso
	