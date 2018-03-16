#include <stdio.h>
#define NUMALUMNOS 3

struct TAlumno {
	char nombre[50];
	char apellidos[50];
	char usuarioGithub[50];
	float notaAcceso;
	int numMatricula;
};

struct TEscuela {
	char nombre[100];
	char direccion[100];
};

void main() {
	// Modo de inicialiar una variable de tipo struct TEscuela
	struct TEscuela miEscuela = { "ETSIDI", "Ronda de Valencia, 3" };

	// Vector de estructuras
	struct TAlumno clase[NUMALUMNOS];
	int i;
	float notaMaxima;
	int posicionMaximo;

	for (i = 0; i < NUMALUMNOS; i++) {
		printf("Introduce nombre\n");
		gets(clase[i].nombre);
		printf("Introduce apellidos\n");
		gets(clase[i].apellidos);
		printf("Introduce usuario Github\n");
		scanf_s("%s", clase[i].usuarioGithub, 50);
		printf("Introduce nota\n");
		scanf_s("%f", &clase[i].notaAcceso);
		printf("Introduce numero matricula\n");
		scanf_s("%d", &clase[i].numMatricula);
		getchar();
	}

	for (i = 0; i < NUMALUMNOS; i++) {
		printf("[%s]: %s %s - %s - %d - %.2f\n", miEscuela.nombre, clase[i].nombre, clase[i].apellidos, clase[i].usuarioGithub, clase[i].numMatricula, clase[i].notaAcceso);
	}

	// Codigo para calcular la nota maxima de la clase 
	// suponiendo que solo hay un alumno con la mayor nota
	notaMaxima = clase[0].notaAcceso;
	posicionMaximo = 0;
	for (i = 1; i < NUMALUMNOS; i++) {
		if (clase[i].notaAcceso > notaMaxima) {
			notaMaxima = clase[i].notaAcceso;
			posicionMaximo = i; // Para saber cual es el alumno de mayor nota
		}
	}
	printf("Nota maxima de la clase: %s %s - %f\n", clase[posicionMaximo].nombre, clase[posicionMaximo].apellidos, clase[posicionMaximo].notaAcceso);

	// Esto es para el caso en que haya varios alumnos con la misma nota maxima
	for (i = 0; i < NUMALUMNOS; i++) {
		if (clase[i].notaAcceso == notaMaxima)
			printf("Nota maxima de la clase: %s %s - %f\n", clase[posicionMaximo].nombre, clase[posicionMaximo].apellidos, clase[posicionMaximo].notaAcceso);

	}

}