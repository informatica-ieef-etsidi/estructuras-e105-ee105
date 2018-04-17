//programa que gestiona una agenda.
#include <stdio.h>
#define TAM 100

struct fecha {
	int dia;
	int mes;
	int agno;
};
struct agenda {
	char nombre[TAM];
	int telefono;
	struct fecha cumpleagnos;
};

void main() {
	struct agenda persona[TAM];
	struct agenda temp;
	int cumple[TAM];
	char opcion;
	int agno = 2018;
	int s = 0, i = 0, j, k;
	int no_es;
	do {//rellena la agenda con contactos
		printf("Introduzca sus contactos:\n");
		printf("Nombre: ");
		gets(persona[i].nombre);
		printf("Telefono: ");
		scanf_s("%d", &persona[i].telefono);
		printf("Fecha de nacimiento\nDia: ");
		scanf_s("%d", &persona[i].cumpleagnos.dia);
		printf("Mes: ");
		scanf_s("%d", &persona[i].cumpleagnos.mes);
		printf("Agno: ");
		scanf_s("%d", &persona[i].cumpleagnos.agno);
		printf("Continuar?\ns->Si\nOtra techa para cambiar de pantalla\n");
		getchar();
		scanf_s("%c", &opcion);
		getchar();
		if (opcion != 's') {
			s = 1;
		}
		i++;
		system("cls");
	} while (s == 0);
	
	do {
		printf("N-->Busqueda por nombre\n");
		printf("F-->Busqueda por fecha de cumpleagnos\n");
		printf("A-->Hemos cambiado de agno?\n");
		scanf_s("%c", &opcion);
		getchar();
		switch(opcion) {
		case 'N':
		case 'n':
			system("cls");
			printf("Nombre: ");
			gets(temp.nombre);
			for (j = 0; j <= i; j++) {
				k = 0;
				no_es = 0;
				while ((persona[j].nombre[k] != '\0') && (temp.nombre[k]!='\0')) {//busca hasta encontrsr un nombre que coincida
					if (persona[j].nombre[k] != temp.nombre[k]) {
						no_es++;
						break;
					}
					else if (((persona[j].nombre[k] != '\0') && (temp.nombre[k] == '\0')) || ((persona[j].nombre[k] == '\0') && (temp.nombre[k] != '\0'))) {
						no_es++;
						break;
					}
					k++;	
				}
				if (no_es == 0) {
					break;
				}
			}
			if ((j > i) && (no_es == 1)) {
				printf("Nombre no encontrado\n");
			}
			else {
				system("cls");
				printf("Nombre: %s\nTlf: %d\nCumple %d agnos el %d/%d\n", persona[j].nombre, persona[j].telefono, (agno - persona[j].cumpleagnos.agno), persona[j].cumpleagnos.dia, persona[j].cumpleagnos.mes);
				imprime los datos
				system("pause");
				system("cls");
			}
			break;
		case 'F':
		case 'f':
			printf("Introduzca la fecha:\nDia: ");
			scanf_s("%d", &temp.cumpleagnos.dia);
			printf("Mes: ");
			scanf_s("%d", &temp.cumpleagnos.mes);
			getchar();
			for (j = 0; j < TAM; j++) {
				cumple[j] = -1;
			}
			k = 0;
			for (j = 0; j <= i; j++) {//busca todos los contactos con esa fecha de cumpleagnos y guarda su posicion en un vector
				if ((temp.cumpleagnos.dia == persona[j].cumpleagnos.dia) && (temp.cumpleagnos.mes == persona[j].cumpleagnos.mes)) {
					cumple[k] = j;
					k++;
				}
			}
			if (k == 0) {
				printf("No se ha encontrado a nadie.\n");
				system("pause");
			}
			else {
				printf("Los contactos encontrados son:\n");
				j = 0;
				while (cumple[j] != -1) {//imprime todos los contactos que cumplen agnos en esa fecha
					printf("Nombre: %s\nTlf: %d\nCumple %d agnos el %d/%d\n\n", persona[cumple[j]].nombre, persona[cumple[j]].telefono, (agno - persona[cumple[j]].cumpleagnos.agno), persona[cumple[j]].cumpleagnos.dia, persona[cumple[j]].cumpleagnos.mes);
						j++;
				}
				system("pause");
				system("cls");
				break;
			}
		case 'A':
		case 'a':
			printf("Que agno es? : ");//para calcular cuantos agnos cumple la persona por defecto se toma el agno 2018 pero se puede cambiar con esta opcion
			scanf_s("%d", agno);
			getchar();
			break;
		default:
			printf("Opcion incorrecta.\n");
			system("pause");
			system("cls");
		}
	} while (s == 1);

}
