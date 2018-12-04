#include "pch.h"
#include <iostream>

int main()
{
	float x, y, z;

	printf("Informe o valor de x: ");
	scanf_s("%f", &x);

	printf("Informe o valor de y: ");
	scanf_s("%f", &y);

	printf("Informe o valor de z: ");
	scanf_s("%f", &z);

	if ((x < y + z) && (y < x + z))
	{
		printf("Os valores formam um trianguilo\n");
	
	if ((x == y) && (y == z) && (z == x))
		printf("Triangulo equilatero\n");
	if ((x == y) && (x != z) || (x != y) && (x == z) || (y != x) && (y == z))
		printf("Triangulo isoceles\n");
	if ((x != y) && (x != z) && (y != z))
		printf("Triangulo escaleno\n");
	}
	else
		printf("Os valores nao formam um triangulo\n");

	return 0;
}