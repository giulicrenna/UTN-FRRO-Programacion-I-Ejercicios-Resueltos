// Ejercicio 8: Realizar un programa que clasifique edades. "Ni�ez", "Adolescencia", "Adultez", "Vejez"

Algoritmo ClasificacionEdad
	Definir edad Como Entero
	
	Escribir  "Ingrese la edad: "
	Leer edad
	
	Si edad >= 0 y edad <= 12 Entonces
		Escribir  "Ni�ez"
	SiNo
		Si edad >= 13 y edad <= 17 Entonces
			Escribir "Adolescencia."
		SiNo
			Si edad >= 18 y edad <= 59
				Escribir "Adultez"
			SiNo
				Si edad >= 60 Y edad <= 120 Entonces
					Escribir  "Tercera edad."
				SiNo
					Escribir  "Edad inv�lidad."
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
