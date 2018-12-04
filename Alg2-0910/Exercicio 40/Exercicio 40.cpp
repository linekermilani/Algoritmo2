// Exercicio 40.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int codigo, quant;
	float preco = 0;

	do
	{
		printf("Informe o codigo do produto (digite -1 para encerrar): ");
		scanf_s("%i", &codigo);
		if (codigo >= 0)
		{
			printf("Informe a quantidade vendida do produto: ");
			scanf_s("%i", &quant);
			switch (codigo)
			{
			case 1001:
				preco = preco + (quant * 5.32);
				break;
			case 1324:
				preco = preco + (quant * 6.45);
				break;
			case 6548:
				preco = preco + (quant * 2.37);
				break;
			case 987:
				preco = preco + (quant * 5.32);
				break;
			case 7623:
				preco = preco + (quant * 6.45);
				break;
			default:
				printf("Codigo invalido\n");
			}
		}
		else
			printf("Programa encerrado\n");

	} while (codigo >= 0);

	printf("O preco total a pagar e de: %f Reais\n", preco);

	return 0;
}