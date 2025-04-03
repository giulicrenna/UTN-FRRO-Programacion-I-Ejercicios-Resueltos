Algoritmo  Calculadora
	Definir  num1 Como Real
	Definir  num2 Como Real
	Definir  opcion_ Como Entero
	
	Escribir  "Ingrese dos números: "
	Leer num1, num2
	
	Escribir  "1. Suma"
	Escribir  "2. Resta"
	Escribir  "3. Multiplicación"
	Escribir  "4. División"
	Escribir  "5. Salir"
	
	Escribir "Seleccione una operacion:"
	Leer opcion_
	
	Segun opcion_ Hacer
		1: Escribir "Suma: ", num1 + num2
		2: Escribir "Resta: ", num1 - num2
		3: Escribir "Multiplicación: ", num1 * num2
		4:
			Si num2 <> 0 Entonces
				Escribir  "Division: ", num1 / num2
			SiNo
				Escribir  "No se puede dividir sobre cero."
			FinSi
		5: Escribir "Fin del programa"
		De Otro Modo:
			Escribir  "Opcion inválida."
	FinSegun
	
	
	
FinAlgoritmo
	