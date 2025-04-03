Algoritmo ValidarDNI
	Definir dni, nota, dniIngresadoo, intentos Como Entero
	
	dni <- 12222890
	nota <- 7
	intentos <- 0
	
	Repetir
		Escribir "Ingrese el DNI del alumno: "
		Leer dniIngresado
		
		intentos <- intentos + 1
		
		Si dniIngresado = dni Entonces
			Escribir "DNI correcto. La nota es: ", nota
			intentos <- 3
		FinSi
	Hasta Que intentos = 3 
	
	si dniIngresado <> dni Entonces
		Escribir "Ha superado el número de intentos posibles."
	FinSi
FinAlgoritmo
