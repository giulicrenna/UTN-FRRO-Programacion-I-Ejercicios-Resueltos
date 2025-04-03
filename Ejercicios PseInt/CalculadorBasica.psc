// Ejercicio 5: Realizar una calculadora que haga operaciones básicas (+, -, *, /)
Algoritmo CalculadorBasica
	Definir a, b Como Real
	Escribir 'Ingrese el primer número: '
	Leer a
	Escribir 'Ingrese el segundo número: '
	Leer b
	Escribir 'Ingrese la operación. (+, -, *, /)'
	Leer op
	Si op='+' Entonces
		Escribir 'Resultado: ', a+b
	SiNo
		Si op='-' Entonces
			Escribir 'Resultado: ', a-b
		SiNo
			Si op='*' Entonces
				Escribir 'Resultado: ', a*b
			SiNo
				Si op='/' Entonces
					Si b<>0 Entonces
						Escribir 'Resultado: ', a/b
					SiNo
						Escribir 'No se puede dividir sobre cero.'
					FinSi
				SiNo
					Escribir 'Operación inválida.'
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
