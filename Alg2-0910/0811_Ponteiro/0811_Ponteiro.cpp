// 0811_Ponteiro.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	int *x, valor, y;
	valor = 35;
	x = &valor;
	y = *x;

	printf("Endereço de variável comum valor: %p\n", &valor);
	printf("Lendo o conteudo do ponteiro x: %p\n", x);
	printf("Endereço da variável ponteiro x: %p\n", &x);
	printf("Conteúdo da variável apontada por x: %f\n", *x);
	printf("Conteúdo da variável comum y: %f\n", y);
	printf("Endereço da variável ponteiro y: %p\n", &y);
}

