//Desarrollador: Sandra Ures
//Programa que calcula el producto mas barato entre 3, teniendo en cuenta sus descuentos

#include <stdio.h>

#define NUMPROD 3

struct producto {
	float precio;
	float descuento;
};

void main() {
	struct producto producto[NUMPROD];
	int i = 0, j;
	float minimo, aux;

	for (i = 0; i < NUMPROD; i++) {
		printf("Dame el precio del producto %d\n", i + 1);
		scanf_s("%f", &producto[i].precio);
		printf("Dame el descuento del producto %d en tanto por ciento\n", i + 1);
		scanf_s("%f", &producto[i].descuento);
		if (producto[i].descuento > 100) {
			printf("El descuento del producto %d no es valido\n", i + 1);
			printf("Vuelve a introducirlo\n");
			scanf_s("%f", &producto[i].descuento);
		}
		else if (producto[i].descuento < 1) {
			producto[i].descuento = producto[i].descuento * 100;
		}
	}
		

	minimo = producto[0].precio * (100 - producto[0].descuento) / 100;
	j = 0;
	for (i = 1; i < NUMPROD; i++) {
		aux = producto[i].precio * (100 - producto[i].descuento) / 100;
		if (aux < minimo) {
			minimo = aux;
			j = i;
		}
	}

	printf("El producto mas barato es el %d con un precio de %f\n", j + 1, minimo);

	system("pause");
}
