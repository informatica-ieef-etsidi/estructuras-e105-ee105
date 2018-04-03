// Desarrollador: Sergio Corredor
#include <stdio.h>
#define TAMVECTOR 50

struct producto {
	float coste, precio, beneficio[TAMVECTOR];
	int cantidadVendida;
	char codigoBarras[TAMVECTOR];
};

void main() {
	struct producto mercancia[TAMVECTOR];
	float beneficioTotal=0;
	int i, n;
	printf("Introduzca el numero de productos en su tienda:");
	scanf_s("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Introduzca el codigo de barras del producto %d:", i + 1);
		scanf_s("%s", mercancia[i].codigoBarras, TAMVECTOR);
		printf("Introduzca su coste:");
		scanf_s("%f", &mercancia[i].coste);
		printf("Introduzca su precio:");
		scanf_s("%f", &mercancia[i].precio);
		printf("Introduzca la cantidad de veces que se vendio:");
		scanf_s("%d", &mercancia[i].cantidadVendida);
	}
	for (i = 0; i < n; i++) {
		mercancia[i].beneficio[i] = mercancia[i].cantidadVendida*(mercancia[i].precio - mercancia[i].coste);
	}
	for (i = 0; i < n; i++) {
		printf("El producto con codigo de barras %s aporto un beneficio de %f euros.\n", mercancia[i].codigoBarras, mercancia[i].beneficio[i]);
	}
	for (i = 0; i < n; i++) {
		beneficioTotal += mercancia[i].beneficio[i];
	}
	printf("El beneficio total fue de %f euros.\n", beneficioTotal);
	system("pause");
}