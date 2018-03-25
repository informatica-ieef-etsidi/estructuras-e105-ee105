//Marcos Velázquez Ruiz
//Programa que dados N puntos dados por el usuuario imprime cuantos estan en cada cuadrante

#include <stdio.h>


#define NUMPUNTOS 100

struct Tpunto {
	float x;
	float y;
};


void main() {

	struct Tpunto punto[NUMPUNTOS];

	int N = NUMPUNTOS;
	int i;
	int contador1=0,contador2=0, contador3=0, contador4=0, contador5=0;

	printf("Indique el numero de puntos a introducir\n");
	scanf_s("%d", &N);



	for (i = 0; i < N; i++) {
		printf("Introduzca la coordenada x del punto %d\n", i + 1);
		scanf_s("%f", &punto[i].x);
		printf("Introduzca la coordenada y del punto %d\n", i + 1);
		scanf_s("%f", &punto[i].y);
	}


	for (i = 0; i < N; i++) {

		if (punto[i].x > 0 && punto[i].y > 0)
			contador1 = contador1 + 1;
		else if (punto[i].x < 0 && punto[i].y > 0)
			contador2 = contador2 + 1;
		else if (punto[i].x < 0 && punto[i].y < 0)
			contador3 = contador3 + 1;
		else if (punto[i].x > 0 && punto[i].y < 0)
			contador4 = contador4 + 1;
		else
			contador5 = contador5 + 1;

	}

	printf("En el cuadrante 1 hay %d puntos\n", contador1);
	printf("En el cuadrante 2 hay %d puntos\n", contador2);
	printf("En el cuadrante 3 hay %d puntos\n", contador3);
	printf("En el cuadrante 4 hay %d puntos\n", contador4);
	printf("Hay %d puntos que no estan en ningun cuadrante\n", contador5); //Es decir, estan ubicados o en los ejes o en el origen de coordenadas

	system("pause\n");
}