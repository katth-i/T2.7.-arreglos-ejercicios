Sistema de Gestion y Analisis de Calificaciones
Este proyecto consiste en una aplicacion de escritorio basada en consola desarrollada en el lenguaje de programacion C++. El sistema permite a una institucion educativa procesar y administrar de forma eficiente las calificaciones del examen final de un grupo de estudiantes, automatizando el calculo de metricas estadisticas y facilitando la busqueda inmediata de registros mediante algoritmos de busqueda secuencial. 
Caracteristicas Principales
•	Modularidad: El codigo fuente se encuentra estructurado en modulos independientes (funciones) para el registro, procesamiento estadistico y busqueda de informacion.
•	Validacion de Entradas: Implementa bucles de control que restringen el ingreso de calificaciones unicamente dentro del rango permitido (0 a 10).
•	Busqueda Secuencial Lineal: Permite localizar de forma inmediata los datos academicos de un alumno especifico a traves de su nombre. 
•	Compatibilidad Total: Diseñado sin caracteres especiales ni tildes en los flujos de salida para evitar errores de codificacion en terminales de comandos de diversos sistemas operativos.
Requerimientos del Sistema
El programa cumple con las siguientes funcionalidades obligatorias:
1.	Registrar Calificaciones: Captura el nombre completo y la nota del examen final de un numero determinado de estudiantes, almacenandolos en arreglos paralelos. 
2.	Mostrar Reporte Estadistico: Despliega de forma automatica: 
o	El promedio general de las calificaciones de todo el grupo. 
o	El numero total de alumnos aprobados (nota mayor o igual a 7). 
o	El numero total de alumnos reprobados (nota menor a 7). 
3.	Buscar Estudiante: Implementa una busqueda secuencial por nombre que devuelve el estado academico actual ("Aprobado" o "Reprobado") o un mensaje de error si el registro no existe. 
Estructura del Codigo
El software se divide en las siguientes funciones clave:
•	void registrar(string nombres[], float notas[], int &n): Encargada de la captura de datos y la validacion de la escala de notas.
•	void reporte(string nombres[], float notas[], int n): Encargada del procesamiento aritmetico y despliegue de estadisticas generales del curso.
•	void buscar(string nombres[], float notas[], int n): Encargada de ejecutar el algoritmo de busqueda lineal sobre los arreglos correspondientes.
•	int main(): Controla el flujo principal del programa mediante un menu interactivo basado en una estructura do-while y switch-case.
