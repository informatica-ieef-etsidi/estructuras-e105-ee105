//Marcos Velázquez Ruiz
//Programa que dados dos puntos te dice donde estan ubicados y su distancia


#include <stdio.h>
#include <math.h>


#define NUMPUNTOS 2

struct Tpunto {
	float x;
	float y;
};

void main() {

	
	struct Tpunto punto[NUMPUNTOS];

	int i;
	float difx;
	float dify;
	float distancia;


	
	for (i = 0; i < NUMPUNTOS; i++) {
		printf("Introduce la coordenada X del punto %d\n", i+1);
		scanf_s("%f", &punto[i].x);
		printf("Introduce la coordenada Y del punto %d\n", i+1);
		scanf_s("%f", &punto[i].y);
	}



	for (i = 0; i < NUMPUNTOS; i++) {
	 
		if (punto[i].x > 0 && punto[i].y > 0)
			printf("El punto %d esta en el primer cuadrante\n", i+1);
		else if (punto[i].x < 0 && punto[i].y > 0)
			printf("El punto %d esta en el segundo cuadrante\n", i+1);
		else if (punto[i].x < 0 && punto[i].y < 0)
			printf("El punto %d esta en el tercer cuadrante\n", i+1);
		else if (punto[i].x == 0 && punto[i].y == 0)
			printf("El punto %d esta en el origen de coordenadas\n", i + 1);
		else if (punto[i].x == 0 && punto[i].y < 0)
			printf("El punto %d esta en el eje negativo de las y \n", i + 1);
		else if (punto[i].x == 0 && punto[i].y > 0)
			printf("El punto %d esta en el eje positivo de las y \n", i + 1);
		else if (punto[i].x < 0 && punto[i].y == 0)
			printf("El punto %d esta en el eje negativo de las x \n", i + 1);
		else if (punto[i].x > 0 && punto[i].y == 0)
			printf("El punto %d esta en el eje positivo de las x \n", i + 1);
		else
			printf("El punto %d esta en el cuarto cuadrante\n", i+1);
	
	}

	difx = punto[1].x - punto[0].x;
	dify = punto[1].y - punto[0].y;

	distancia = sqrt((difx*difx) + (dify*dify));

	 printf("La distancia entre ambos puntos es %.3f\n", distancia);

	system("pause");

}