#include "stdafx.h"
#include <iostream>


int main()
{
	int cont, numero, result;
	cont = 0;

	for (int i = 0; i < 20; i++)
	{
		printf("Informe um numero inteiro: ");
		scanf_s("%i", &numero);
		for (int cont = 1; cont <= numero; cont++)
		{
			result = numero * cont;
			printf("%i  x  %i = %i\n", numero, cont, result);
		}
	}

	return 0;
}