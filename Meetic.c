#include <stdio.h>
#include <string.h>
#include <Windows.h>

struct Perfil {
	char sexo, busca, gusto1, gusto2;
	int edad;
	char correo[100];
	char nombre[50];
};

void main() {

	int i;
	struct Perfil Usuario;
	struct Perfil Jose = { 'M', 'F', 'L', 'M', 25, "Jose25@gmail.com" };
	struct Perfil Maria = { 'F', 'M', 'L', 'P', 27, "Maria27@gmail.com" };
	struct Perfil patricia = { 'F', 'M', 'P', 'M', 20, "Patricia20@gmail.com" };

	printf("Bienvenido a Meetic\n");
	Sleep (2500);

	system("cls");
	printf("Para registrarte introduce tu nombre:\n");
	gets(Usuario.nombre);
	system("cls");
	printf("A continuacion rellena los datos personales que iran apareciendo por pantalla:\n\n");
	printf("Edad: ");
	scanf_s("%d", &Usuario.edad);
	getchar();
	printf("\n");
	printf("Sexo masculino (M), femenino (F): ");
	scanf_s("%c", &Usuario.sexo, 1);
	printf("\n");
	getchar();
	
	if (97 <= Usuario.sexo && Usuario.sexo <= 122) {
		Usuario.sexo -= 32;
	}

	printf("Correo: ");
	gets(Usuario.correo);
	system("cls");
	printf("Nos interesa conocer un poco sobre tus gustos para encontrar tu pareja ideal\n\n");
	printf("Que buscas? hombre (M) o mujer (F): ");
	scanf_s("%c", &Usuario.busca, 1);
	getchar();

	if (97 <= Usuario.busca && Usuario.busca <= 122) {
		Usuario.busca -= 32;
	}

	printf("\n");
	printf("Prefieres libros (L) o peliculas (P): ");
	scanf_s("%c", &Usuario.gusto1, 1);
	getchar();
	printf("\n");

	if (97 <= Usuario.gusto1 && Usuario.gusto1 <= 122) {
		Usuario.gusto1 -= 32;
	}

	printf("Prefieres playa (P) o montana (M): ");
	scanf_s("%c", &Usuario.gusto2, 1);
	getchar();
	system("cls");

	if (97 <= Usuario.gusto2 && Usuario.gusto2 <= 122) {
		Usuario.gusto2 -= 32;
	}

	printf("Registro completado\n");
	printf("tu perfil es el siguiente:\n\n");
	printf("nombre: %s, correo: %s, edad: %d, ", Usuario.nombre, Usuario.correo, Usuario.edad);

	if (Usuario.sexo == 'M') {
		printf("sexo: masculino\n");
	}
	else {
		printf("sexo: femenino\n");
	}

	if (Usuario.gusto1 == 'L') {
		printf("Prefieres libros ");
	}
	else {
		printf("Prefieres peliculas ");
	}

	if (Usuario.gusto2 == 'M') {
		printf("e ir a la montana ");
	}
	else {
		printf("e ir a la playa ");
	}
	
	if (Usuario.busca == 'F') {
		printf("y buscas una mujer\n\n");
	}
	else {
		printf("y buscas un hombre\n\n");
	}

	system("pause");
	system("cls");

	if (Usuario.busca == Jose.sexo) {

		if (Jose.busca == Usuario.sexo && (Usuario.gusto1 == Jose.gusto1 || Usuario.gusto2 == Jose.gusto2)) {
			printf("Hemos encontrado tu pareja ideal\n\n");
			printf("Su nombre es jose, tiene %d anos y su correo es: %s\n", Jose.edad, Jose.correo);
			
			if (Usuario.gusto1 == Jose.gusto1) {
				if (Usuario.gusto2 == Jose.gusto2) {
					printf("Coincidis en que a ambos os gustan los libros e ir a la montana\n\n");
				}
				else {
					printf("Coincidis en que a ambos os gusta leer libros\n\n");
				}
			}
			else {
				printf("Coincidis en que a ambos os gusta ir a la montana\n\n");
			}
		}
		else {
			printf("Lo siento, en estos momentos nadie registrado coincide con tus gustos\n\n");
		}
	}
	else if (Usuario.busca == Maria.sexo) {

		if (Maria.busca == Usuario.sexo && (Usuario.gusto1 == Maria.gusto1 || Usuario.gusto2 == Maria.gusto2)) {
			printf("Hemos encontrado tu pareja ideal\n\n");
			printf("Su nombre es Maria, tiene %d anos y su correo es: %s\n", Maria.edad, Maria.correo);

			if (Usuario.gusto1 == Maria.gusto1) {
				if (Usuario.gusto2 == Maria.gusto2) {
					printf("Coincidis en que a ambos os gustan los libros e ir a la playa\n\n");
				}
				else {
					printf("Coincidis en que a ambos os gusta leer libros\n\n");
				}
			}
			else {
				printf("Coincidis en que a ambos os gusta ir a la playa\n\n");
			}
		}
		else if (patricia.busca == Usuario.sexo && (Usuario.gusto1 == patricia.gusto1 || Usuario.gusto2 == patricia.gusto2)) {
			printf("Hemos encontrado tu pareja ideal\n\n");
			printf("Su nombre es Patricia, tiene %d anos y su correo es: %s\n", patricia.edad, patricia.correo);

			if (Usuario.gusto1 == patricia.gusto1) {
				if (Usuario.gusto2 == patricia.gusto2) {
					printf("Coincidis en que a ambos os gustan las peliculas e ir a la montana\n\n");
				}
				else {
					printf("Coincidis en que a ambos os gusta ver peliculas\n\n");
				}
			}
			else {
				printf("Coincidis en que a ambos os gusta ir a la montana\n\n");
			}
		}
		else {
			printf("Lo siento, en estos momentos nadie registrado coincide con tus gustos\n\n");
		}
	}

	system("pause");
}