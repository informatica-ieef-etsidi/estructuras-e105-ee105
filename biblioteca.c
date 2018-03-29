//Paula Arellano
//Codigo que te dice que usuarios han cogido prestado mas de 3 libros, 2 calculadoras o 1 ordenador de la biblioteca.
#include<stdio.h>
#define NUSUARIOS 3

struct TUsuario {
	char nombre[50];
	char dni[10];
	int nlibros;
	int ncalculadoras;
	int nordenadores;
	
};

void main() {
	struct TUsuario usuarios[NUSUARIOS];
	int i;
	
	for (i = 0; i < NUSUARIOS; i++) {
		printf("\nIntroduce nombre de usuario (nombre.apellido) : ");
		gets(usuarios[i].nombre); 
		printf(" DNI: ");
		scanf_s("%s", usuarios[i].dni, 10);
		printf(" Numero de libros prestados: ");
		scanf_s("%d", &usuarios[i].nlibros);
		printf(" Numero de calculadoras prestadas: ");
		scanf_s("%d", &usuarios[i].ncalculadoras);
		printf(" Numero de ordenadores prestados: ");
		scanf_s("%d", &usuarios[i].nordenadores);
		getchar();
	}

	//Aviso de quien tiene mas de 3 libros, 2 calculadoras o 1 ordenador
	
	printf("\n Usuarios con mas de tres libros: \n");
		i = 0;
		while (i <= NUSUARIOS) {
			if (usuarios[i].nlibros > 3) {
				printf("%s - %s : %d libros \n ", usuarios[i].nombre, usuarios[i].dni, usuarios[i].nlibros);
			}
			i++;
		}
	printf("\nUsuarios con mas de tres libros: \n");
		i = 0;
		while (i <= NUSUARIOS) {
			if (usuarios[i].ncalculadoras > 2) {
				printf("%s - %s : %d calculadoras \n ", usuarios[i].nombre, usuarios[i].dni, usuarios[i].ncalculadoras);
			}
			i++;
		}
	printf("\n Usuarios con mas de un ordenador: \n");
		i = 0;
		while (i <= NUSUARIOS) {
			if (usuarios[i].nordenadores > 1) {
				printf("%s - %s : %d ordenadores \n ", usuarios[i].nombre, usuarios[i].dni, usuarios[i].nordenadores);
			}
			i++;
		}
		

	system("PAUSE");
}