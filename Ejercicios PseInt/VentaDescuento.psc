Algoritmo VentaDescuento
	Definir venta como Real
	Definir descuento como Real
	Definir total como Real
	
	Escribir "ingrese el valor de la venta:"
	Leer venta
	
	Si venta > 0 Entonces
		si venta >=  100000 Entonces
			descuento <- venta * 0.15
		SiNo
			descuento <- venta * 0.10
		FinSi
		
		total <- venta - descuento
		
		Escribir "Total con descuentos: ", total
	Sino
		Escribir  "Venta inválida."
	FinSi
FinAlgoritmo
