// Ejercicio 5: Realizar una calculadora que haga operaciones b�sicas (+, -, *, /)
Algoritmo CalculadorBasica
	Definir a, b Como Real
	Escribir 'Ingrese el primer n�mero: '
	Leer a
	Escribir 'Ingrese el segundo n�mero: '
	Leer b
	Escribir 'Ingrese la operaci�n. (+, -, *, /)'
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
					Escribir 'Operaci�n inv�lida.'
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
