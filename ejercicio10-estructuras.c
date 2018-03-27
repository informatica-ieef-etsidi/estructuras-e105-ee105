#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 3
struct alumno {
	char nombre[50];
	char apellido[50];
	float notaDeAcceso;
};
/*Diseñe una estructura que represente un alumno, con los datos nombre, apellidos y nota de
acceso a la universidad. Realiza un programa que pida los datos de los alumnos que forman el
grupo y los almacene en un vector de alumnos. El programa debe indicar cuál es la media de la
nota de acceso del grupo.
*/

void main() {
	struct alumno alumnos[N];
	int i;
	float media = 0;

	//Se guardan datos de los alumnos.
	for (i = 0;i < N;i++) {
		printf("Introduzca nombre del alumno %d: \n",i+1);
		getchar();
		gets(alumnos[i].nombre);
		printf("Introduzca apellido del alumno %d: \n", i + 1);
		gets(alumnos[i].apellido);
		printf("Introduzca nota de acceso del alumno %d: \n", i + 1);
		scanf("%f", &alumnos[i].notaDeAcceso);
		system("cls");
	}
	system("cls");
	//Calcula la media.
	for (i = 0;i < N;i++) {
		media += alumnos[i].notaDeAcceso;
	}
	media = media / N;
	printf("La media de las notas de acceso de la clase es: %.2f \n", media);

	system("PAUSE");
	
}
