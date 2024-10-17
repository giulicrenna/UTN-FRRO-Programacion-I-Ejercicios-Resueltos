# Universidad Tecnológica Nacional {align=center}
## Ejercitacion - Sistema de Hospital {align=center}
### Giuliano Crenna {align=center}

---

**Ejercicio: Sistema de Gestión de Hospital**

Desarrolla un programa en C para gestionar la información de un hospital. El sistema debe permitir gestionar el ingreso, egreso y modificación de pacientes, el registro de citas y diagnósticos. Para este ejercicio:

- Utiliza **arrays** para almacenar los datos de los pacientes, citas y diagnósticos.
- Implementa funciones para cada operación (agregar, eliminar, modificar).
- Aplica **manejo dinámico de memoria** en la administración de datos.

### Requerimientos:

1. **Estructuras necesarias**:
   - Estructura `Paciente` con los siguientes campos:
     - `id` (entero)
     - `nombre` (cadena)
     - `edad` (entero)
     - `diagnostico` (cadena)
   - Estructura `Cita` con los campos:
     - `idPaciente` (entero)
     - `fecha` (cadena en formato "DD/MM/AAAA")
     - `hora` (cadena en formato "HH:MM")
     - `motivo` (cadena)
   - Arreglos de pacientes y citas.

2. **Operaciones que debe soportar**:
   - **Ingresar pacientes**: Se permite el ingreso de un nuevo paciente al sistema.
   - **Modificar datos de pacientes**: El sistema debe permitir modificar los datos de un paciente dado su ID.
   - **Dar de alta a un paciente**: Elimina el registro del paciente.
   - **Registrar citas médicas**: Permite registrar una cita para un paciente ingresando su ID, fecha, hora y motivo.
   - **Modificar citas**: Se permite modificar las citas de un paciente existente.
   - **Eliminar citas**: Permite eliminar una cita de un paciente.

3. **Funciones a implementar**:
   - `void ingresarPaciente(Paciente *pacientes, int *numPacientes);`
   - `void modificarPaciente(Paciente *pacientes, int numPacientes, int id);`
   - `void eliminarPaciente(Paciente *pacientes, int *numPacientes, int id);`
   - `void registrarCita(Cita *citas, int *numCitas, int idPaciente);`
   - `void modificarCita(Cita *citas, int numCitas, int idPaciente);`
   - `void eliminarCita(Cita *citas, int *numCitas, int idPaciente);`
   - `void mostrarPacientes(Paciente *pacientes, int numPacientes);`
   - `void mostrarCitas(Cita *citas, int numCitas);`

4. **Interfaz de usuario**:
   - Implementa un menú en la consola para que el usuario pueda seleccionar las opciones correspondientes: 
     1. Ingresar nuevo paciente
     2. Modificar paciente
     3. Eliminar paciente
     4. Registrar cita
     5. Modificar cita
     6. Eliminar cita
     7. Mostrar todos los pacientes
     8. Mostrar todas las citas
     9. Salir

5. **Validaciones**:
   - Valida que los ID de los pacientes no se repitan.
   - Verifica que los ID ingresados existan para las operaciones de modificación o eliminación.


### Desafíos adicionales:
- Implementa un manejo de citas y diagnósticos.
- Utiliza archivos para guardar y cargar los datos al iniciar y cerrar el programa.
