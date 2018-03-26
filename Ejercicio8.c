//Marcos Velazquez Ruiz
//Programa que dados tres puntos te dice si estan alineados o no

#include <stdio.h>


struct Tpunto {
	float x;
	float y;
};

void main() {
	
	struct Tpunto punto[3];
	int i;

	float A = 0;
	float B = 0;

	for (i = 0; i < 3; i++) {
		printf("Introduce las coordenadas x e y del punto %d\n", i + 1);
		scanf_s("%f %f", &punto[i].x, &punto[i].y);

	}
	A = (punto[1].x - punto[0].x) / (punto[2].x - punto[1].x);  
	B = (punto[1].y - punto[0].y) / (punto[2].y - punto[1].y);


	if (A == B)  //Condicion para que tres puntos esten alineados
		printf("Los tres puntos estan alineados\n");
	else
		printf("Los tres puntos no estan alineados\n");


	system("pause");
}