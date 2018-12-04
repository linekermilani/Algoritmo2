#include "pch.h"
#include <iostream>

int main()
{
	int matriz[3][3];
	int l, c;

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("Informe um valor: ");
			scanf_s("%i", &matriz[l][c]);
		}
	}

	printf("\nMatriz Digitada: \n\n");

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%i " "", matriz[l][c]);
		}
		printf("\n");
		printf("\n");
	}
	
	printf("Matriz Inversa: \n\n");

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%i " "", matriz[c][l]);
		}
		printf("\n");
		printf("\n");
	}

	return 0;
}