//Paula Arellano
/*Programa que gestiona las mesas de un restaurante: va asociado a un fichero donde esta . Imprime el menu
y los comensales eligen el numero de la comida y la bebida que van a pedir. Estos datos se guardan en
un vector dentro de una estructura y se calcula el precio de lo que han comido. A su vez, la estructura mesa esta 
incluida en un vector de estructuras, pudiendose elegir el numero de mesas*/

#include<stdio.h>
#define NMESAS 2

struct mesas {
	int numero;
	int comensales;
	float cuenta;
	int comida[30];
	int bebida[30];
	
};

void main() {
	struct mesas restaurante[NMESAS];
	int i, j;


	printf("MENU:\n 1. Bocadillo de tortilla (4€)\n 2. Bocadillo de jamon (5€)\n 3.Bocadillo de lomo (4€) \n 4. Sandwich mixto (3€)\n");
	printf("\nBEBIDAS: \n 1. Agua (1€)\n 2. Refresco(1.5€)\n 3. Cerveza (1.25€)\n 4.Cafe(1€)\n");
	
	for (i = 0; i < NMESAS; i++) {
		printf("Numero de mesa: ");
		scanf_s("%d", &restaurante[i].numero);
		printf("Numero de comensales: ");
		scanf_s("%d", &restaurante[i].comensales);

		for (j = 0; j < restaurante[i].comensales; j++) {
			printf("Introduzca numero de comida del comensal %d: ", j + 1);
			scanf_s("%d", &restaurante[i].comida[j]);
			printf("Introduzca numero de bebida del comensal %d: ", j + 1);
			scanf_s("%d", &restaurante[i].bebida[j]);
		}
	}
	
	for (i = 0; i < NMESAS; i++) {
		restaurante[i].cuenta = 0;
		for (j = 0; j < restaurante[i].comensales; j++) {
			switch (restaurante[i].comida[j]) {
			case 1:
				restaurante[i].cuenta = restaurante[i].cuenta + 4;
				break;
			case 2:
				restaurante[i].cuenta = restaurante[i].cuenta + 5;
				break;
			case 3:
				restaurante[i].cuenta = restaurante[i].cuenta + 4;
				break;
			case 4:
				restaurante[i].cuenta = restaurante[i].cuenta + 3;
			}

			switch (restaurante[i].bebida[j]) {
			case 1:
				restaurante[i].cuenta = restaurante[i].cuenta + 1;
				break;
			case 2:
				restaurante[i].cuenta = restaurante[i].cuenta + 1.5;
				break;
			case 3:
				restaurante[i].cuenta = restaurante[i].cuenta + 1.25;
				break;
			case 4:
				restaurante[i].cuenta = restaurante[i].cuenta + 1;
			}
		}
		
	}

	for (i = 0; i < NMESAS; i++) {
		printf("Numero de mesa: %d\n", restaurante[i].numero);
		printf(" Comensales: %d\n", restaurante[i].comensales);
		printf(" Comida: ");
		for (j = 0; j < restaurante[i].comensales; j++) {
			printf("%d, ", restaurante[i].comida[j]);
		}
		printf("\n Bebida: ");
		for (j = 0; j < restaurante[i].comensales; j++) {
			printf("%d, ", restaurante[i].bebida[j]);
		}
		printf("\n Importe: %.2f\n", restaurante[i].cuenta);
	}
	system("PAUSE");
}