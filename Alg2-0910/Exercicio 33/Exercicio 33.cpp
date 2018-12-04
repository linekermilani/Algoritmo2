#include "pch.h"
#include <iostream>

int main()
{
	double chico, ze;
	int anos;

	chico = 1.50;
	ze = 1.10;
	anos = 0;

	while (ze < chico)
	{
		chico = chico + 0.02;
		ze = ze + 0.03;
		anos++;
	}

	printf("Foram necessarios %i anos para Ze ser maior do que Chico\n", anos);

	return 0;
}

