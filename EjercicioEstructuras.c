//Desarrollador: Marta Vinagre


#include <stdio.h>
#include <stdlib.h>

struct TVivienda {

	int plantas;
	int banios;
	int habitaciones;
};

void main() {

	struct TVivienda casa[2];
	int i;

	printf("Introduzca los datos de las casas:\n");

	for (i = 0; i < 2; i++) {

		printf("Numero de plantas:\n");
		scanf_s("%d", &casa[i].plantas);
		printf("Numero de baños:\n");
		scanf_s("%d", &casa[i].banios);
		printf("Numero de habitaciones:\n");
		scanf_s("%d", &casa[i].habitaciones);
	}


	//Comparamos plantas
	if (casa[0].plantas < casa[1].plantas) {
		printf("La segunda casa tiene mas plantas\n");
	}
	else if (casa[0].plantas > casa[1].plantas) {
		printf("La primera casa tiene mas plantas\n");
	}
	else {
		printf("Las dos casas tienen las mismas plantas\n");
	}


	//Comparamos baños
	if (casa[0].banios < casa[1].banios) {
		printf("La segunda casa tiene mas baños\n");
	}
	else if (casa[0].banios > casa[1].banios) {
		printf("La primera casa tiene mas baños\n");
	}
	else {
		printf("Las dos casas tienen los mismos baños\n");
	}

	//Comparamos habitaciones
	if (casa[0].habitaciones < casa[1].habitaciones) {
		printf("La segunda casa tiene mas habitaciones\n");
	}
	else if (casa[0].habitaciones > casa[1].habitaciones) {
		printf("La primera casa tiene mas habitaciones\n");
	}
	else {
		printf("Las dos casas tienen las mismas habitaciones\n");
	}

	system("PAUSE");
}