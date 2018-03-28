//Paula Arellano
//Programa que busca un caracter dentro de un texto (ambos escritos por el usuario) y lo elimina o intercambia por otro.
#include<stdio.h>
void main() {
	char texto[500], texto_eliminar[500];
	char caracter, caracter2=0, opcion;
	int i = 0, j=0;

		printf("Introduzca el texto: \n");
		gets(texto);

		printf("Introduzca el caracter a modificar: ");
		scanf_s("%c", &caracter);
		getchar();

		printf("Que desea hacer con el caracter '%c'? \n", caracter);
		printf("Pulse C si desea cambiarlo.\n");
		printf("Pulse E si desea eliminarlo. \n");
		scanf_s("%c", &opcion);
		getchar();
		
		
		if (opcion >= 'a' && opcion <= 'z') {
			opcion -= 32;
		}

		switch (opcion) {
			case 'C':
				printf("Introduzca el caracter a incluir: ");
				scanf_s("%c", &caracter2);
				i = 0;
				while (texto[i] != '\0') {
					if (texto[i] == caracter)
						texto[i] = caracter2;
						i++;
				}
				printf("Texto modificado:\n %s\n", texto);
				break;

			case 'E':
				i = 0;
				while (texto[i] != '\0') {

					if (texto[i] == caracter) {
						i++;
						continue;
					}
					else texto_eliminar[j] = texto[i];
					j++;
					i++;
				}
				texto_eliminar[j] = '\0';
				printf("Texto modificado:\n %s\n", texto_eliminar);
		}

		

		system("PAUSE");

}