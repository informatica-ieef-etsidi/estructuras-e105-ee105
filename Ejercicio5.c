#include <stdio.h>
#include <string.h>

struct Tagenda {

	char nombre[50];
	char email[50];
	int año;
	int mes;
};


void main() {

	struct Tagenda contacto[2];
	int i, j;
	int contador1 = 0;
	int contador2 = 0;


	for (j = 0; j < 2; j++) {


		printf("Introduce nombre\n");
		gets(contacto[j].nombre);

		contador1 = 0;
		contador2 = 0;

		while (contador1 != 1 || contador2 != 1) {

			printf("Introduce email\n");
			gets(contacto[j].email);
			contador1 = 0;
			contador2 = 0;

			for (i = 0; i < 100; i++) {
				if (contacto[j].email[i] == '@')
					contador1 = contador1 + 1;

				if (contacto[j].email[i] == '.')
					contador2 = contador2 + 1;

			}

			if (contador1 == 1 && contador2 == 1)
				printf("Email valido\n");
		}


		printf("Introduce mes de nacimiento\n");
		scanf_s("%d", &contacto[j].mes);
		while (contacto[j].mes < 1 || contacto[j].mes > 12) {
			printf("Introduce mes de nacimiento\n");
			scanf_s("%d", &contacto[j].mes);
		}
		printf("Introduce a%co de nacimiento\n", 164); // 164 es el numero del caracter ñ en la tabla ASCII
		scanf_s("%d", &contacto[j].año);
		while (contacto[j].año < 0 || contacto[j].año > 2018) {
			printf("Introduce a%co de nacimiento\n", 164);
			scanf_s("%d", &contacto[j].año);
		}
		getchar();


	}


	printf("%s - %s nacido el mes %d del a%co %d\n", contacto[0].nombre, contacto[0].email, contacto[0].mes, 164, contacto[0].año);
	printf("%s - %s nacido el mes %d del a%co %d\n", contacto[1].nombre, contacto[1].email, contacto[1].mes, 164, contacto[1].año);


	if (strcmp(contacto[0].email, contacto[1].email) == 0)
		printf("Ambos emails son iguales, algo falla.\n");


	

	system("pause");
}
