#include <stdio.h>

struct Tiempo {
	int hora;
	int minuto;
	int segundo;
};

void main() {
	struct Tiempo reloj;
	char opcion;
	int i = 0;

	

	while (1) {
		printf("Que desea realizar:\n");
		printf("P-Poner en hora el reloj\n");
		printf("I-Incrementar un segundo\n");
		printf("M-Mostrar la hora completa\n");
		scanf_s("%c", &opcion);

		switch (opcion) {

		case 'p':
		case 'P':
			printf("Introduce la hora, minutos y segundos\n");
			scanf_s("%d %d %d", &reloj.hora, &reloj.minuto, &reloj.segundo);
			while (reloj.hora >= 24 || reloj.hora < 0) {
				printf("Hora no valida\n Vuelve a introducirla\n");
				scanf_s("%d", &reloj.hora);
			}
			while (reloj.minuto >= 60 || reloj.minuto < 0) {
				printf("Minutos no validos\n Vuelve a introducirlos\n");
				scanf_s("%d", &reloj.minuto);
			}
			while (reloj.segundo >= 60 || reloj.segundo < 0) {
				printf("Segundos no validos\n Vuelve a introducirlos\n");
				scanf_s("%d", &reloj.segundo);
			}
			i = 1;
			break;

		case 'i':
		case 'I':
			if (i == 0) {
				printf("Primero intoduce la hora\n");
			}
			else {
				reloj.segundo++;
				if (reloj.segundo == 60) {
					reloj.minuto++;
					reloj.segundo = 0;
					if (reloj.minuto == 60) {
						reloj.hora++;
						reloj.minuto = 0;
						if (reloj.hora == 24) {
							reloj.hora = 0;
						}
					}
				}
			}
			break;

		case 'm':
		case 'M':
			if (i == 0) {
				printf("Primero intoduce la hora\n");
			}
			else {
				if (reloj.hora < 10) {
					printf("0%d:", reloj.hora);
				}
				else {
					printf("%d:", reloj.hora);
				}
				if (reloj.minuto < 10) {
					printf("0%d:", reloj.minuto);
				}
				else {
					printf("%d:", reloj.minuto);
				}
				if (reloj.segundo < 10) {
					printf("0%d\n", reloj.segundo);
				}
				else {
					printf("%d\n", reloj.segundo);
				}
			}
			break;

		default:
			printf("Has introducido una opcion incorrecta\n");
		}
		system("pause");
		system("cls");
		getchar();
	}
}