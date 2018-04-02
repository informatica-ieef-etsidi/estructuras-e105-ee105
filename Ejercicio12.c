//José Ignacio Brea García
//Programa para calcular el determinante de una matriz cuadrada de orden 2 o 3

#include <stdio.h>
#define TAMMATRIZ 2
struct Matriz {
	float numero;
};

void main(){

	struct Matriz matriz[TAMMATRIZ][TAMMATRIZ];
	int i,j;
	float determinante;

	if (TAMMATRIZ == 2 || TAMMATRIZ == 3) {

		for (i = 0; i < TAMMATRIZ; i++) {
			for (j = 0; j < TAMMATRIZ; j++) {
				printf("Introduce el numero de la fila %d y columna %d \n", i + 1, j + 1);

				scanf_s("%f", &matriz[i][j].numero);
			}

		}
		if (TAMMATRIZ == 2) {
			//fórmula para matriz orden 2
			determinante = ((matriz[0][0].numero * matriz[1][1].numero) - (matriz[0][1].numero* matriz[1][0].numero));
			printf("Determinante = %.2f\n", determinante);
		}
		if (TAMMATRIZ == 3) {
			//fórmula para matriz orden 3
			determinante = ((matriz[0][0].numero *((matriz[1][1].numero * matriz[2][2].numero) - (matriz[1][2].numero * matriz[2][1].numero))) - (matriz[0][1].numero *((matriz[1][0].numero * matriz[2][2].numero) - (matriz[1][2].numero * matriz[2][0].numero))) + (matriz[0][2].numero *((matriz[1][0].numero * matriz[2][1].numero) - (matriz[1][1].numero * matriz[2][0].numero))));
			printf("Determinante = %.2f\n", determinante);
		}
	}
	else {
		printf("este programa solo puede hacer matrices de orden 2 o 3\n");
	}
	system("pause");

}
