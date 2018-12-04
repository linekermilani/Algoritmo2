#include"pch.h"
#include <iostream>

int main()
{
	int matriz[3][3];
	int l, c, valor, mult;

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("Informe um valor: ");
			scanf_s("%i", &matriz[l][c]);
		}
	}

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%i "" ", matriz[l][c]);
		}
		printf("\n");
	}

	printf("Informe um valor que deseja multiplicar: ");
	scanf_s("%i", &valor);
	printf("Informe a coluna que deseja multiplicar: (0, 1 ou 2): ");
	scanf_s("%i", &mult);

	for (l = 0; l < 3; l++)
	{
		for (c = mult; c <= mult; c++)
		{
			matriz[l][c] = matriz[l][c] * valor;
			printf("%i " "", matriz[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}