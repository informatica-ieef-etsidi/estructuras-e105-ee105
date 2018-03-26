//Marcos Velazquez Ruiz
//Programa que dados los datos de un usuario comprueba que son validos, el email se toma valido al tener unicamente un caracter '@' y un '.' 

#include <stdio.h>


struct Tagenda {

	char nombre[50];
	char email[50];
	int año;
	int mes;
};


void main() {

	struct Tagenda contacto;
	int i;
	int contador1 = 0;
	int contador2 = 0;



	printf("Introduce nombre\n");
	gets(contacto.nombre);

	while (contador1 != 1 || contador2 != 1) {

		printf("Introduce email\n");
		gets(contacto.email);
		contador1 = 0;
		contador2 = 0;

		for (i = 0; i < 100; i++) {
			if (contacto.email[i] == '@')
				contador1 = contador1 + 1;

			if (contacto.email[i] == '.')
				contador2 = contador2 + 1;

		}

		if (contador1 == 1 && contador2 == 1)
			printf("Email valido\n");
	}
	

	printf("Introduce mes de nacimiento\n");
	scanf_s("%d", &contacto.mes);
	while (contacto.mes < 1 || contacto.mes > 12) {
		printf("Introduce mes de nacimiento\n");
		scanf_s("%d", &contacto.mes);
	}
	printf("Introduce a%co de nacimiento\n", 164); // 164 es el numero del caracter ñ en la tabla ASCII
	scanf_s("%d", &contacto.año);
	while (contacto.año < 0 || contacto.año > 2018) {
		printf("Introduce a%co de nacimiento\n", 164);
		scanf_s("%d", &contacto.año);
	}
	getchar();





	printf("%s - %s nacido el mes %d del a%co %d\n", contacto.nombre, contacto.email, contacto.mes, 164, contacto.año);

	system("pause");
}
