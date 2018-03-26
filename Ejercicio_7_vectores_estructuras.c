//ALEJANDRO LÓPEZ GUERRERO
//Ejercicio 7 de vectores de estructuras


#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <string.h>

struct empleado {
	char codigo[50];
	float sueldo;
	char categoria;
	int horas_trabajadas;
};
void main(void) {
	int n, i, menu1;
	struct empleado Empleado[200];
	float sueldo_A = 27.5, sueldo_B = 20, sueldo_C = 18.2, aux = 0, media;

	printf("\n\tDATOS DE EMPLEADOS\n\t__________________\n\nIndique el numero de empleados que va a introducir: ");
	scanf_s("%d", &n);
	getchar();
	for (i = 0; i < n; i++) {
		printf("\nCodigo del empleado %d: ", (i + 1));
		gets(Empleado[i].codigo);
		_strupr(Empleado[i].codigo);
		printf("\nCategoria (A, B, C): ");
		scanf_s("%c",&Empleado[i].categoria);
		getchar();
		printf("\nHoras trabajadas: ");
		scanf_s("%d", &Empleado[i].horas_trabajadas);
		system("cls");
		getchar();
		printf("\n\tDATOS DE EMPLEADOS\n\t__________________\n\n");
	}
	for (i = 0; i < n; i++) {
		switch ((char)Empleado[i].categoria) {
		case 'A':
		case 'a':
			Empleado[i].categoria = 'A';
			Empleado[i].sueldo = Empleado[i].horas_trabajadas*sueldo_A; 
			break;
		case 'B':
		case 'b':
			Empleado[i].categoria = 'B';
			Empleado[i].sueldo = Empleado[i].horas_trabajadas*sueldo_B; 
			break;
		case 'C':
		case 'c':
			Empleado[i].categoria = 'C';
			Empleado[i].sueldo = Empleado[i].horas_trabajadas*sueldo_C; 
			break;
		default:
			printf("Alguna de las categorias son erroneas.\n\n");
			system("Pause()");
			return;
		}
	}
	for (i = 0; i < n; i++) {
		printf("\nEmpleado %d: %s - %c - %d - %.2f \44 ",n,
			Empleado[i].codigo,Empleado[i].categoria,Empleado[i].horas_trabajadas,
			Empleado[i].sueldo);
		aux = aux + Empleado[i].sueldo;
		if (i == (n-1)) {
			media = aux / n;
		}
	}
	printf("\n\nMedia de sueldos: %.2f", media);
	printf("\n\n\n");
	system("Pause()");
}
