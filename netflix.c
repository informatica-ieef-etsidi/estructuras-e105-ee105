/*Sirve solo para registrar y borrar usuarios, no salen series.. srry*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define perfil 3
//#define _CRT_SECURE_NO_WARNINGS
struct usuario {

	char nombre[100];
	char email[100];

};

void main() {

	int i,q=1, j, k, m, borrar;
	int opcion;
	struct usuario persona1= { "vacio", "vacio" };
	struct usuario persona2 = { "vacio", "vacio" };
	struct usuario persona3 = { "vacio", "vacio" };
	struct usuario persona0 = { "vacio", "vacio" };
	char registrar;
	//printf("   1-%s	 2-%s	 3-%s	\n ", persona[1].nombre, persona[2].nombre, persona[3].nombre );
	while (q == 1) {
		printf("NETFLIX\n\n");
		printf("	Quien eres.elige tu perfil.\n");
		printf("  1-%s	 2-%s	 3-%s	\n ", persona1.nombre, persona2.nombre, persona3.nombre);
		printf("\n\t\t\t 4-administrar usuarios. registrarse.\n");
		scanf_s("%d", &opcion);
		getchar();
		switch (opcion) {

		case 1:
			if (strcmp(persona0.nombre, persona1.nombre) == 0) {
				printf("No hay usuario.\n");
				system("pause");
				system("cls");
				break;
			}
			else {
				printf("Usuario: %s \n Email:%s \n", persona1.nombre, persona1.email);
				system("pause");
				system("cls");
				break;
			}
			break;
		case 2:
			if (strcmp(persona0.nombre, persona2.nombre) == 0) {
				printf("No hay usuario.\n");
				system("pause");
				system("cls");
				break;
			}
			else {
				printf("Usuario: %s\n Email: %s \n", persona2.nombre, persona2.email);
				system("pause");
				system("cls");
				break;
			}
			break;
		case 3:
			if (strcmp(persona0.nombre, persona3.nombre) == 0) {
				printf("No hay usuario.\n");
				system("pause");
				system("cls");
				break;
			}
			else {
				printf("Usuario: %s\n Email:%s \n", persona3.nombre, persona3.email);
				system("pause");
				system("cls");
				break;
			}
			break;
		case 4:
			system("cls");
			printf("Que desea hacer, registrarse R o administrar A\n");
			scanf_s("%c", &registrar);
			getchar();
			switch(registrar) {

			case 'r':
			case 'R':

				if (strcmp(persona0.nombre, persona1.nombre)== 0) {
					printf("Es el usuario 1.\n");
					printf("Como quiere llamarse.\n");
					gets (persona1.nombre);
					printf("Introduza su email.\n");
					gets (persona1.email);
					system("pause");
					system("cls");
					break;
				}
				else if (strcmp(persona0.nombre, persona2.nombre) == 0) {
					printf("Es el usuario 2.\n");
					printf("Como quiere llamarse.\n");
					gets(persona2.nombre);
					printf("Introduza su email.\n");
					gets(persona2.email);
					system("pause");
					system("cls");
					break;
				}
				else if (strcmp(persona0.nombre, persona3.nombre) == 0) {
					printf("Es el usuario 3.\n");
					printf("Como quiere llamarse.\n");
					gets(persona3.nombre);
					printf("Introduza su email.\n");
					gets(persona3.email);
					system("pause");
					system("cls");
					break;
				}
				else {
					printf("Todos los perfiles estan ocupados.\n");	
					system("pause");
					system("cls");
				}
			break;

			case 'a':
			case'A':
				printf("Que perfil quiere eliminar, 1, 2, 3, 4 para volver al menu:");
				scanf_s("%d", &borrar);
				getchar();
				if (borrar == 1) {
					if (strcmp(persona0.nombre, persona1.nombre) == 0) {
						printf("No hay usuario en ese perfil.\n");
						system("pause");
						system("cls");
						break;
					}
					else {
						printf("El perfil utilizado por %s ha sido elimnado\n", persona1.nombre);
						strcpy_s(persona1.nombre,6, persona0.nombre);
						system("pause");
						system("cls");
					}
				}
				else if (borrar == 2) {
					if (strcmp(persona0.nombre, persona2.nombre) == 0) {
						printf("No hay usuario en ese perfil.\n");
						system("pause");
						system("cls");
						break;
					}
					else {
						printf("El perfil utilizado por %s ha sido elimnado\n", persona2.nombre);
						strcpy_s(persona2.nombre, 6, persona0.nombre);
						system("pause");
						system("cls");
					}

				}
				else if (borrar == 3) {
					if (strcmp(persona0.nombre, persona3.nombre) == 0) {
						printf("No hay usuario en ese perfil.\n");
						system("pause");
						system("cls");
						break;
					}
					else {
						printf("El perfil utilizado por %s ha sido elimnado\n", persona3.nombre);
						strcpy_s(persona3.nombre,6, persona0.nombre);
						system("pause");
						system("cls");
					}
				
				}
				else if (borrar == 4) {
					printf("Cargando...\n");
					system("pause");
					system("cls");
				}
				else {
					printf("Opcion no valida.\n");
					system("pause");
					system("cls");
				}
				}
			}
		}

	
	system("pause");
}