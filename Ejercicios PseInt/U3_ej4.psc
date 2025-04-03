Proceso MayorMenor
	Definir  num, i, may, men Como Entero
	
	Para i <- 1 Hasta 5 Con Paso  1 Hacer
		Escribir i, ") Ingrese un numero entero positivo."
		
		Repetir
			Leer num
			
			Si num <= 0
				Escribir "Numero inválido."
			FinSi
		Hasta Que num > 0
		
		si i = 1 Entonces
			may <- num
			men <- num
		SiNo
			Si num > may Entonces
				may <- num
			FinSi
			
			Si num < men Entonces
				men <- num
			FinSi
		FinSi
	FinPara
	
	Escribir "El menor: ", men
	Escribir "El mayor: ", may
FinProceso
	