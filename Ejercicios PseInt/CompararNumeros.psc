// Ejercicio 4: Hacer un programa para comparar dos números. EJ: 5 > 3 El mayor es 5.

Algoritmo CompararNumeros
	Definir A, B Como Real
	
	Escribir "escriba un numero: "
	Leer A
	
	Escribir " Escriba un numero: "
	Leer B 
	
	Si A > B Entonces
		Escribir " El numero mayor ingresado es " A
	SiNo 
		Si A < B Entonces
			Escribir " El numero mayor ingresado es " B
		SiNo
			Escribir  "Los números son iguales."
		FinSi
	FinSi
	
FinAlgoritmo