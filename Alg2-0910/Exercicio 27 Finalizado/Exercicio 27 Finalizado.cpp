#include "pch.h"
#include <iostream>

int main()
{
	float valor, pago, troco;
	int n100, n10, n1;

	troco = 0;
	n100 = 0;
	n10 = 0;
	n1 = 0;


	printf("Informe o valor da compra: ");
	scanf_s("%f", &valor);
	printf("Informe o valor pago pelo cliente: ");
	scanf_s("%f", &pago);

	troco = pago - valor;

	while (troco >= 100)
	{
		troco = troco - 100;
		n100++;
	}
	while (troco >= 10)
	{
		troco = troco - 10;
		n10++;
	}
	while (troco >= 1)
	{
		troco = troco - 1;
		n1++;
	}

	printf("O valor da compra foi de: %f Reais\n", valor);
	printf("O valor do troco foi de: %f %f Reais\n", pago - valor);
	printf("O total de notas de 100 dadas de troco foi de: %i\n", n100);
	printf("O total de notas de 10 dadas de troco foi de: %i\n", n10);
	printf("O total de notas de 1 dadas de troco foi de: %i\n", n1);

	return 0;
}

