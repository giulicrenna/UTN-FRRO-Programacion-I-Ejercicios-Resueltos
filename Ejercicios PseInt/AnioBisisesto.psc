// Ejercicio 7: hacer un programa para determinar si un año es bisisesto o no.

// Para que sea bisisesto tiene que ser divisible por cuatro, no divisible por 100, y no divisible por 400.

Algoritmo AnioBisisesto
	Definir anio Como Entero
	
	Escribir "Ingrese un año: "
	Leer anio
	
	Si (anio MOD 4 = 0 Y anio mod 100 <> 0) Y (anio MOD 400 <> 0) Entonces
		Escribir "Es un año bisiesto."
	SiNo
		Escribir "No es un año bisiesto."
	FinSi
FinAlgoritmo
