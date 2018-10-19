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

float CalculaMedia(float a, float b, float c, float d)
{
	float soma = a + b + c + d;
	
	float media = soma / 4;

	return media;
}

void ImprimeValoresMaioresQueMedia(int a, int b, int c, int d, float media)
{
	printf("Os valores maiores que a media sao: ");
	if (a > media)
	{
		printf("%i ", a);
	}

	if (b > media)
	{
		printf("%i ", b);
	}

	if (c > media)
	{
		printf("%i ", c);
	}

	if (d > media)
	{
		printf("%i ", d);
	}
}



	int main()
	{
		int primeiro = LerNumeroInteiro();
		int segundo = LerNumeroInteiro();
		int terceiro = LerNumeroInteiro();
		int quarto = LerNumeroInteiro();

		int m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);
		printf("Maior valor encontrado: %i\n\n", m);

		float mediaValores = CalculaMedia(primeiro, segundo, terceiro, quarto);

		printf("A media dos valores digitados eh: %f\n", mediaValores);

		ImprimeValoresMaioresQueMedia(primeiro, segundo, terceiro, quarto, mediaValores);
	}




