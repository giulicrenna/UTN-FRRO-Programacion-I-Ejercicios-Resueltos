Algoritmo ejercicio10
	Definir pass, dni, saldo, dniIngresado, passIngresado, intentos, opc Como Entero
	Definir nuevoMonto como Real
	
	dni <- 43841488
	pass <- 1234
	saldo <- 150000
	cbu <- 564984489489444
	intentos <- 1
	
	Mientras intentos <= 3 Hacer
		Escribir "Ingrese  su DNI: "
		Leer dniIngresado
		
		Escribir "Ingrese su contraseña: "
		leer passIngresado
		
		Si dniIngresado = dni Y passIngresado = pass Entonces
			Escribir "Ingreso satisfactorio."
			
			Repetir
				Escribir "1- Consulta de saldo."
				Escribir "2- Consulta CBU."
				Escribir "3- Ingresar dinero."
				Escribir "4- Retirar dinero."
				Escribir "5- Salir."
				
				Leer opc
				
				Segun opc Hacer
					1: 
						Escribir "Su saldo es: $", saldo
					2:
						Escribir "Su CBU es: ", cbu
					3:
						Escribir "Ingrese el monto determinado:"
						
						Leer nuevoMonto
						
						saldo <- saldo + nuevoMonto
					4:
						Escribir "Ingrese el monto a retirar:"
						
						Leer nuevoMonto
						
						saldo <- saldo - nuevoMonto
				FinSegun
				
			Hasta Que opc = 5
		Sino
			intentos <- intentos + 1
			Escribir "Algunos de los datos son incorrectos. Intento ", intentos, " de 3"
		FinSi
		
		
	FinMientras
	
FinAlgoritmo
