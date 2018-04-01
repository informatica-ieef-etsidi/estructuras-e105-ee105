#include<stdio.h> 
#include <stdlib.h>

struct empleado
{
	char nombre[30];
	char sexo[12];
	float salario;
};

void main() {
	struct empleado emp[100];
	int i, nemp, pmay, pmen;
	float mayor = 0.0, menor = 9999.0;
	
	printf("Introduzca el numero de empleados: ");
	scanf_s("%d", &nemp);
	
	for (i = 0; i <nemp; i++)
	{
		printf("\n");
		printf("Nombre[%d]: ", i + 1);
		scanf_s("%s", emp[i].nombre, 100);
		printf("Sexo[%d]: ", i + 1);
		scanf_s("%s", emp[i].sexo, 100);
		printf("Salario[%d]: ", i + 1);
		scanf_s("%f", &emp[i].salario);
		
		if (emp[i].salario>mayor)
		{
			mayor = emp[i].salario;
			pmay = i;
		}
		
		if (emp[i].salario<menor)
		{
			menor = emp[i].salario;
			pmen = i;
		}
	}
	printf("\n\n%s es el trabajador con MAYOR salario\n", emp[pmay].nombre);
	printf("%s es el trabajador con MENOR salario\n",emp[pmen].nombre);

	system("PAUSE");
}
