//Programa que registra los datos de un número determinado de atletas y dice cuál tiene más medallas
//Por Ismael Gómez Pacheco
#include <stdio.h>
#include <string.h>
#define NUMAT 5

struct TAtleta {
	char nombre[50];
	char pais[50];
	char deporte[50];
	int nmedallas;
};

void main() {
	struct TAtleta deportistas[NUMAT];
	int i, nm=0, j, k=-1, l=0;
	for (i = 0;i < NUMAT;i++) {
		printf("Introduzca sus datos, deportista numero %d\n", i + 1);
		printf("Nombre:");
		gets(deportistas[i].nombre);
		printf("Pais:");
		gets(deportistas[i].pais);
		printf("Deporte:");
		gets(deportistas[i].deporte);
		printf("Numero de medallas:");
		scanf_s("%d", &deportistas[i].nmedallas);
		getchar();
		system("cls");
	}
	for (i = 0;i < NUMAT;i++) {
		if (deportistas[i].nmedallas == nm) { //Por si hay otro con el número máximo de medallas
			k = i;
			l++; //l cuenta cuántos hay con el número máximo de medallas
		}
		if (deportistas[i].nmedallas > nm) {
			nm = deportistas[i].nmedallas;
			j = i;
			k = -1; //Cuando hay un nuevo máximo k y l se reinician
			l = 0;
		}
	}
	if (l > 1) { //El programa no declara un ganador si hay más de dos empatados
		printf("Hay varias personas igualadas y ninguna destaca en el numero de medallas\n");
		system("pause");
		return;
	}
	printf("El deportista con mayor numero de medallas es %s, que tiene %d, es de %s y hace %s\n", deportistas[j].nombre, nm, deportistas[j].pais, deportistas[j].deporte);
	if (k > -1) {
		printf("Tambien tiene %d medallas %s de %s en %s\n", nm, deportistas[k].nombre, deportistas[k].pais, deportistas[k].deporte);
	}
	system("pause");
}