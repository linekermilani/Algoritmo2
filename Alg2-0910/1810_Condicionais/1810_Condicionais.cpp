// 1810_Condicionais.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int LerNumeroInteiro()
{
	int a;

	printf("Favor informe um numero inteiro: ");
	scanf_s("%i", &a);

	return a;
}


int MaiorValorInteiro(int a, int b, int c, int d)
{
		int maior = a;

		if (maior < b)
		{
			maior = b;
		}
		if (maior < c)
		{
			maior = c;
		}
		if (maior < d)
		{
			maior = d;
		}

		/* 
			if ((a >= b) && (a >= c) %% (a >= d))
			{
			return a;
			}
		*/ 

		return maior;
}

int MediaValores(float a, float b, float c, float d)
{
	float media = a + b + c + d / 4;
	return media;



	int main()
	{
		int primeiro = LerNumeroInteiro();
		int segundo = LerNumeroInteiro();
		int terceiro = LerNumeroInteiro();
		int quarto = LerNumeroInteiro();

		int m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);
		printf("Maior valor encontrado: %i\n\n", m);
	}




