// 1610.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int soma(int x, int y)
{
	int a = x + y;
	return a;
}

int sub(int x, int y)
{
	int a = x - y;
	return a;
}

int mult(int x, int y)
{
int a = x * y;
return a;
}

float divisao(float x, float y)
{
	float a = x / y;
	return a;
}
int main()
{
	int a;
	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	int b;
	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &b);

	int r = soma(a, b);
	int s = sub(a, b);
	float d = divisao((float)a, (float)b);
	int m = mult(a, b);

printf("Valor da soma: %i\n", r);
printf("Valor da subtracao: %i\n", s);
printf("Valor da multiplicacao: %i\n", m);
printf("Valor da divisao: %f\n", d);

system("pause");
}