// Alg20910.cpp : define o ponto de entrada para o aplicativo do console.
//

/*
As linhas abaixo contem inclusao
de bibliotecas
*/
#include "stdafx.h" // biblioteca
#include <iostream>
int a; // inteiro
float b; // real com pouca precisao decimal
double c; // real com grande precisao decimal

int main()
{
	// Variaveis locais
	char d; // caractere
	bool e; // booleano (true/false)

	printf_s("Hello world!\n\n"); // \n = pula linha

	printf("Teste\t\tTeste\n\n"); // \t = espaçamento (tab)

	printf("Mostrando o valor %i \n", 5);
	printf("A soma de %i e %i eh: %i \n", 99, 10, 99+10);
	printf("Mostrando valor real: %.2f \n", 4.3);

	int f;
	f = 8;
	a = f * 2;

	printf("Resultado da multiplicacao de %i por 2 eh: %i \n", f, a);

	printf("Informe um valor\n");
	scanf_s("%i", &a);

	printf("\n\nValor digitado foi: %i\n\n", a);

	system("pause");
	return 0;
}


