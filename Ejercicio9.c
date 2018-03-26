// Marcos Velazquez Ruiz
// Programa que dados la base y la altura de dos triangulos calcula las area y las compara
#include <stdio.h>

struct Ttriangulo {
	float base;
	float altura;
	float area; 
};

void main() {

	struct Ttriangulo triangulo[1];
	int i;
	
	for (i = 0; i < 2; i++) {
		printf("Introduce la base y altura del triangulo %d\n", i + 1);
		scanf_s("%f %f", &triangulo[i].base, &triangulo[i].altura);
		while (triangulo[i].base <= 0 || triangulo[i].altura <= 0) {
			printf("Introduce la base y altura del triangulo %d\n", i + 1);
			scanf_s("%f %f", &triangulo[i].base, &triangulo[i].altura);
		}
		triangulo[i].area = (triangulo[i].base*triangulo[i].altura) / 2;
	}
	printf("Area 1 = %.2f\n", triangulo[0].area);
	printf("Area 2 = %.2f\n", triangulo[1].area);
	
	if (triangulo[0].area < triangulo[1].area)
		printf("El triangulo 2 tiene mas area\n");
	else if (triangulo[0].area > triangulo[1].area)
		printf("El triangulo 1 tiene mas area\n");
	else 
		printf("Los triangulos tienen el mismo area\n");

	system("pause");
}