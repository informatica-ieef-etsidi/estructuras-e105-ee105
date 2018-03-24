//Simulador de registro en una web de compras online
//Tras el registro, para poder entrar a su usuario se necesita contraseña
//Solo se pueden registrar 2 personas a la vez


#include <stdio.h>
#include <Windows.h>
#include <string.h>

struct TUsuario { 
	char nombre[50];
	char contrasena[50];
	char cuentabancaria[25];
};
void main() {
	struct TUsuario usuario, usuario1, usuario2;
	int opcion, comp1, comp2,comp3,i=0;
	printf("Bienvenido a nuestra pagina de ventas online.\n");
	Sleep(2000);
	do {//Bucle que se repite hasta que se quiera salir del programa				
			system("cls");
			printf("Si quiere entrar a su cuenta introduzca 1\nSi quiere registrarse introduzca 2\nSi quiere salir del programa introduzca 3\n"); //menu
			scanf_s("%d", &opcion);

			switch (opcion) {
			case 1: 
				printf("Introduzca su nombre de usuario\n");
				scanf_s("%s", usuario.nombre, 50);
				comp1 = strcmp(usuario.nombre, usuario1.nombre); //Compara entre ambos usuarios
				comp2 = strcmp(usuario.nombre, usuario2.nombre);
				if (comp1 == 0) {
					printf("Bienvenido %s\n", usuario1.nombre);
					do {
						printf("Introduzca su contrasena para entrar\n");
						scanf_s("%s", usuario.contrasena, 50);
						comp1 = strcmp(usuario.contrasena, usuario1.contrasena);
						if (comp1 == 0) {
							printf("Contrasena correcta\n");
							Sleep(2000);
						}
						else {
							printf("Contrasena incorrecta vuelva a intentarlo\n");
						}
					} while (comp1 != 0); //Hasta que la contraseña sea correcta se repite

				}
				else if (comp2 == 0) {
					printf("Bienvenido %s", usuario2.nombre);
					do {
						printf("Introduzca su contrasena para entrar\n");
						scanf_s("%s", usuario.contrasena, 50);
						comp1 = strcmp(usuario.contrasena, usuario2.contrasena);
						if (comp1 == 0) {
							printf("Contrasena correcta\n");
							Sleep(2000);
						}
						else {
							printf("Contrasena incorrecta vuelva a intentarlo\n");
						}
					} while (comp1 != 0);// hasta que la contraseña sea correcta se repite
				}
				else {
					printf("Lo sentimos, no se encuentra entre nuestros usuarios, registrese como uno nuevo.\n");
					Sleep(2000);
				}
				getchar();
				break;
			case 2:
				printf("Para registrarse necesitamos varios datos sobre usted\n");
				printf("Introduzca su nombre de usuario\n");
				if (i==0) {
					scanf_s("%s", usuario1.nombre, 50);
					printf("Introduzca su contrasena\n");
					scanf_s("%s", usuario1.contrasena, 50);
					printf("Introduzca su numero de cuenta bancaria\n");
					scanf_s("%s", usuario1.cuentabancaria, 25);
					printf("Usted ha sido registrado como %s con contrasena %s y numero de cuenta %s\n", usuario1.nombre, usuario1.contrasena, usuario1.cuentabancaria);
					Sleep(2000);
					i = i++;
				}
				else {
					do {
						scanf_s("%s", usuario2.nombre, 50);
						comp1 = strcmp(usuario2.nombre, usuario1.nombre);//Compara si el nombre está ya usado por otro
						if (comp1 == 0) {
							printf("Ya existe un usuario con ese nombre, intente otro\n");
						}
						else {
							printf("Introduzca su contrasena\n");
							scanf_s("%s", usuario2.contrasena, 50);
							printf("Introduzca su numero de cuenta bancaria\n");
							scanf_s("%s", usuario2.cuentabancaria, 25);
							printf("Usted ha sido registrado como %s con contrasena %s y numero de cuenta %s", usuario2.nombre, usuario2.contrasena, usuario2.cuentabancaria);
						}
					} while (comp1 == 0); //Se repite hasta que se introduzca un nombre de usuario aun no registrado
					
					Sleep(2000);
				}
					getchar();
					break;
			case 3: printf("Hasta la proxima!\n");
				Sleep(2000);
				getchar();
				break;
			default: printf("Elija entre alguna de las 3 opciones\n");
				Sleep(2000);
			}
		
		
	} while (opcion != 3);
	system("pause");
}