// 2310_Condicionais.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>

float LerSalario()
{
	printf("Favor digitar seu salario: ");
	float salario = 0;
	scanf_s("%f", &salario);
	return salario;
}

float CalculaIR(float salario, float aliquota, float deducao)
{
	return (salario * aliquota) - deducao;
}

void ApresentarIR(float salario)
{
	float ir = 0;

	if (salario <= 1903.98)
	{
		printf("Isento\n");
	}
	else if (salario <= 2826.65)
	{
		ir = CalculaIR(salario, 0.075, 142.8);
		printf("Aliquota: 7.5%%, deducao: 142.80\n"); // %% para mostrar a % no print;
		printf("Valor IR: %.2f\n", ir); // %.2f limitando em 2 casas decimais no print;
		printf("Sobrou: %f", salario - ir);
	}
	else if (salario <= 3751.05)
	{
		ir = CalculaIR(salario, 0.15, 354.8);
		printf("Aliquota: 15%%, deducao: 354.80\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else if (salario <= 4664.68)
	{
		ir = CalculaIR(salario, 0.225, 636.13);
		printf("Aliquota: 22.5%%, deducao: 636.13\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else
	{
		ir = CalculaIR(salario, 0.275, 869.36);
		printf("Aliquota: 27.5%%, deducao: 869.36\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
}

int main()
{
	float salario = LerSalario();
	ApresentarIR(salario);
	printf("\n");
}