Proceso PromedioNotas
	Definir nota, suma, contador Como Real
	
	suma <- 0
	contador <- 0
	
	Escribir "Ingese una nota (-1 para terminar): "
	
	Repetir
		leer nota
		
		si nota >= 0 Entonces
			suma <- suma + nota
			contador <- contador + 1
		FinSi
	Hasta Que nota = -1
	
	Si contador > 0 Entonces
		Escribir  "Promedio: ", suma / contador
	SiNo
		Escribir "No se ingresaron notas."
	FinSi
FinProceso
	