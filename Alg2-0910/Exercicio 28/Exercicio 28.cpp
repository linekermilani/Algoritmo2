// Exercicio 28.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

// Exercicio 28
int main()
{
	int quant;
	float salario, vendas;

	printf("Informe a quantidade de veiculos vendidos pelo vendedor: ");
	scanf_s("%i", &quant);

	printf("Informe o valor total de vendas do vendedor: ");
	scanf_s("%f", &vendas);

	salario = ((954 * 2) + (quant * 50) + (vendas * 0.05));
	printf("O salario total do vendedor e de : %f Reais\n", salario);

	return 0;
}