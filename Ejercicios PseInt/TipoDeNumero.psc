// Ejercicio 3: Hacer un programa para determinar si un numero es menor a cero, igual o mayor.

Algoritmo TipoDeNumero
	Escribir  "Escriba un número: "
	Leer num
	
	Si num > 0 Entonces
		Escribir "Es positivo."
	SiNo
		Si num < 0 Entonces
			Escribir "Es negativo."
		SiNo
			Escribir "Es cero."
		FinSi
	FinSi
FinAlgoritmo
