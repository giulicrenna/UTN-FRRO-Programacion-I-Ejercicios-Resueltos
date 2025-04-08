Algoritmo ejercicio9
	Definir vendedor Como Caracter
	Definir venta, totalVentas como Real
	Definir i como Entero
	
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingrese el codigo del vendedor (A - E)"
		Leer vendedor
		totalVentas <- 0
		
		Repetir 
			Escribir "Ingrese importe de venta (0 para terminar)"
			
			Leer venta
			
			totalVentas <- totalVentas + venta
		Hasta Que venta = 0
		
		Escribir "Vendedor ", vendedor, " - Comisión: $", totalVentas * 0.025
	FinPara
FinAlgoritmo
