// 1, 2, 3, -2, -1
// 3 positivos, 2 negativos, 5 en total
Algoritmo Ejercicio8
	// pos y neg correspondes al conteo de positivos y negativos.
	Definir num, pos, neg Como Real
	
	pos <- 0
	neg <- 0
	
	Repetir
		Escribir "Ingrese un numero. (0 para finalizar)"
		Leer num
		
		Si num <> 0 
			Si num > 0
				pos <- pos + 1
			Sino
				neg <- neg + 1
			FinSi

		FinSi
	Hasta Que num = 0
	
	Escribir "Cantidad de positivos: ", pos
	Escribir "Cantidad de negativos: ", neg
	Escribir "Total: ", pos + neg
	
FinAlgoritmo
	