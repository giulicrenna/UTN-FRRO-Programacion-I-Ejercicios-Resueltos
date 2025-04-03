// Complejidad: O(n, m) = n*m
Algoritmo PromedioCurso
	Definir alumnos, parciales, i, j, nota, sumaNotas, promedioAlumno, sumaGeneral como Real
	
	sumaGeneral <- 0
	
	Escribir "Ingrese la cantidad de alumnos:"
	Leer alumnos
	
	Escribir "Ingrese la cantidad de parciales:"
	Leer parciales
	
	i <- 0
	
	Repetir
		sumaNotas <- 0
		j <- 0
		
		Repetir
			Repetir
				Escribir "Ingrese la nota ", j, " del alumno ", i, " (0 < nota <= 10)"
				Leer nota
				
				Si nota <= 0 O nota > 10
					Escribir "Nota inválida."
				FinSi
			Hasta Que nota > 0 Y nota <= 10 
			
			sumaNotas <- sumaNotas + nota
			j <- j + 1
		Hasta Que j > parciales - 1
		
		promedioAlumno <- sumaNotas / parciales
		
		Escribir "El promedio del alumno ", i, " es ", promedioAlumno
		
		sumaGeneral <- sumaGeneral + promedioAlumno
		
		i <- i + 1
	Hasta Que i > alumnos - 1
	
	
	Escribir "El promedio general del curso es: ", sumaGeneral/alumnos
FinAlgoritmo
