//Marcos Velazquez Ruiz
//Programa que dados dos usuarios con sus datos imprime los datos del mayor o de ambos en caso de coincidir

#include <stdio.h>


struct Tagenda {

	char nombre[50];
	char email[50];
	int a�o;
	int mes;
};



void main() {

	struct Tagenda contacto[2];
	int i;
	int a�omenor;
	int PosicionA�oMenor;
	int mesmenor;
	int PosMesMenor;


	for (i = 0; i < 2; i++) {
		printf("Introduce nombre\n");
		gets(contacto[i].nombre);
		printf("Introduce email\n");
		gets(contacto[i].email);
		printf("Introduce mes de nacimiento\n");
		scanf_s("%d", &contacto[i].mes);
		while (contacto[i].mes < 1 || contacto[i].mes > 12) {
			printf("Introduce mes de nacimiento\n");
			scanf_s("%d", &contacto[i].mes);
		}
		printf("Introduce a%co de nacimiento\n",164); // 164 es el numero del caracter � en la tabla ASCII
		scanf_s("%d", &contacto[i].a�o);
		while (contacto[i].a�o < 0 || contacto[i].a�o > 2018) {
			printf("Introduce a%co de nacimiento\n",164);
			scanf_s("%d", &contacto[i].a�o);
		}
		getchar();
		
	
	}

	mesmenor = contacto[0].mes;
	a�omenor = contacto[0].a�o;
	for (i = 0; i < 2; i++) {
		if (contacto[i].a�o <= a�omenor) {
			a�omenor = contacto[i].a�o;
			PosicionA�oMenor = i;
		}
	}
	for (i = 0; i < 2; i++) {
		if (contacto[i].a�o == a�omenor) {
			if (contacto[i].mes < mesmenor) {
				mesmenor = contacto[i].mes;
				PosMesMenor = i;
			}
		}
	}


	if (contacto[0].a�o != contacto[1].a�o)
		printf("El/La mayor es  %s - %s nacid@ en el mes %d del a%co %d \n", contacto[PosicionA�oMenor].nombre, contacto[PosicionA�oMenor].email, contacto[PosicionA�oMenor].mes,164, contacto[PosicionA�oMenor].a�o);
	else if (contacto[0].mes != contacto[1].mes)
		printf("El/La mayor es  %s - %s nacid@ en el mes %d del a%co %d \n", contacto[PosMesMenor].nombre, contacto[PosMesMenor].email, contacto[PosMesMenor].mes,164, contacto[PosMesMenor].a�o);


	if (contacto[0].a�o == contacto[1].a�o && contacto[0].mes == contacto[1].mes) {
		for (i =0 ; i < 2; i++) {
			if (contacto[i].mes == mesmenor) {
				printf("Ambos nacieron el mismo a%co y mes:\n", 164);
				for (i = 0; i < 2; i++) {
					printf("%s - %s - %d/%d \n", contacto[i].nombre, contacto[i].email, contacto[i].mes, contacto[i].a�o);
				}
			}
		}

	}

	system("pause\n");
}

