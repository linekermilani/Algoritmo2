// ConsoleApplication1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

/* Exercicio 5
float fabrica;
float taxa;
float preco;

int main()
{
	printf("Informe o valor de fabrica do veiculo: ");
	scanf_s ("%f", &fabrica);

	float taxa = (fabrica * 0.28) + (fabrica * 0.45);
	float preco = fabrica + taxa;

	printf("O custo do veiculo ao consumidor e: %f\n", preco);
	system ("pause");
}
*/

/* Exercicio 6
int main()
{
	int num, soma;
	int i = 1;
	soma = 0;

	printf("Informe um numero inteiro positivo: ");
	scanf_s("%i", &num);
	while (i <= num)
	{
		soma = soma + i;
		i++;
	}
	printf("A soma dos primeiros numeros inteiros positivos e: %i\n", soma);
}
*/

/* Exercicio 8
int main()
{
	int idade;
	printf("Informe a idade do nadador: ");
	scanf_s("%i", &idade);

	if (idade >= 5 & idade <= 7)
	{
		printf("Categoria Infantil A\n");
	}
	if (idade >= 8 & idade <= 10)
	{
		printf("Categoria Infantil B\n");
	}
	if (idade >= 11 & idade <= 13)
	{
		printf("Categoria Juvenil A\n");
	}
	if (idade >= 14 & idade <= 18)
	{
		printf("Categoria Juvenil B\n");
	}
	if (idade > 18)
	{
		printf("Categoria Adulto\n");
	}
	if (idade < 5)
	{
		printf("Idade sem categoria\n");
	}
}
*/ 

/* Exercicio 9
int main()
{
	int operacao;
	float n1, n2, n3;
	float med;

	printf("Informe a primeira nota do aluno: ");
	scanf_s("%f", &n1);
	printf("Informe a segunda nota do aluno: ");
	scanf_s("%f", &n2);
	printf("Informe a terceira nota do aluno: ");
	scanf_s("%f", &n3);
	printf(" 1 - Aritmetica \n 2 - Ponderada \n 3 - Harmonica\n");
	printf("Informe o tipo de media que deseja calcular: ");
	scanf_s("%i", &operacao);

	switch (operacao)
	{
	case 1:
		med = (n1 + n2 + n3) / 3;
		printf("A media aritmetica das 3 notas foi de: %f\n", med);
		break;
	case 2:
		med = (3 * n1 + 3 * n2 + 4 * n3) / 10;
		printf("A media ponderada das 3 notas foi de: %f\n", med);
		break;
	case 3:
		med = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
		printf("A media harmonica das 3 notas foi de: %f\n", med);
		break;
	default:
		printf("Operação incorreta");
		break;
	}
}
*/

/* Exercicio 10
int main()
{
	int codigo;
	int quant;
	float preco;

	printf("Informe o codigo do produto: ");
	scanf_s("%i", &codigo);
	printf("Informe a quantidade vendida: ");
	scanf_s("%i", &quant);

	switch (codigo)
	{
	case 1001:
		preco = quant * 5.32;
		printf("O valor a ser pago e: %f\n", preco);
		break;
	case 1324:
		preco = quant * 6.45;
		printf("O valor a ser pago e: %f\n", preco);
		break;
	case 6548:
		preco = quant * 2.37;
		printf("O valor a ser pago e: %f\n", preco);
		break;
	case 987:
		preco = quant * 5.32;
		printf("O valor a ser pago e: %f\n", preco);
		break;
	case 7623:
		preco = quant * 6.45;
		printf("O valor a ser pago e: %f\n", preco);
		break;
	default:
		printf("Codigo invalido\n");
	}
}
*/
