#include "pch.h"
#include <iostream>

int main()
{
	int a, negativos;

	negativos = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("Informe o %i valor: ", i+1);
		scanf_s("%i", &a);
		if (a < 0)
			negativos = negativos + 1;
	}
	printf("A quantidade de valores negativos foi: %i\n", negativos);

	return 0;
}
