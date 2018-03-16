#include <stdio.h>

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

	// Dos variables de tipo "struct TAlumno"
	struct TAlumno alumno1, alumno2;
	// Modo de inicialiar una variable de tipo struct TEscuela
	struct TEscuela miEscuela = {"ETSIDI", "Ronda de Valencia, 3"};

	printf("Introduce nombre\n");
	gets(alumno1.nombre);
	printf("Introduce apellidos\n");
	gets(alumno1.apellidos);
	printf("Introduce usuario Github\n");
	scanf_s("%s", alumno1.usuarioGithub, 50);
	printf("Introduce nota\n");
	scanf_s("%f", &alumno1.notaAcceso);
	printf("Introduce numero matricula\n");
	scanf_s("%d", &alumno1.numMatricula);

	getchar();
	printf("Introduce nombre\n");
	gets(alumno2.nombre);
	printf("Introduce apellidos\n");
	gets(alumno2.apellidos);
	printf("Introduce usuario Github\n");
	scanf_s("%s", alumno2.usuarioGithub, 50);
	printf("Introduce nota\n");
	scanf_s("%f", &alumno2.notaAcceso);
	printf("Introduce numero matricula\n");
	scanf_s("%d", &alumno2.numMatricula);

	printf("[%s]: %s %s - %s - %d - %.2f\n", miEscuela.nombre, alumno1.nombre, alumno1.apellidos, alumno1.usuarioGithub, alumno1.numMatricula, alumno1.notaAcceso);
	printf("[%s]: %s %s - %s - %d - %.2f\n", miEscuela.nombre, alumno2.nombre, alumno2.apellidos, alumno2.usuarioGithub, alumno2.numMatricula, alumno2.notaAcceso);
	
	if (alumno1.notaAcceso > alumno2.notaAcceso)
		printf("%s tiene mas nota que %s\n", alumno1.nombre, alumno2.nombre);
	else if (alumno1.notaAcceso < alumno2.notaAcceso)
		printf("%s tiene mas nota que %s\n", alumno2.nombre, alumno1.nombre);
	else
		printf("Tienen la misma nota\n");


}