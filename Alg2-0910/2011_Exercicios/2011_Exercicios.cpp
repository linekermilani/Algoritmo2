// 2011_Exercicios.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/* Exercicio 11
int main()
{
	float area, raio;
	float pi = 3.14159;

	pi = 3.14159;
	printf("Digite o Raio do circulo: ");
	scanf_s("%f", &raio);
	area = pi * (raio * raio);
	printf("A Area encontrada foi de: %f", area);

}
*/

/* Exercicio 12
int main()
{
	float area, base, altura;

	printf("Informe o valor da base do trianguilo: ");
	scanf_s("%f", &base);
	printf("Informe a altura do trianguilo: ");
	scanf_s("%f", &altura);
	area = (base * altura) / 2;
	printf("A Area do trianguilo e: %f", area);

	return 0;
}
*/

/* Exercicio 13
int main()
{
	int num;
	int impar = 1;
	int i = 1;

	printf("Informe um numero inteiro positivo: ");
	scanf_s("%i", &num);

	while (i <= num)
	{
		printf("%i\n", impar);
		impar = impar + 2;
		i++;
	}
	return 0;
}
*/

/* Exercicio 14
int main()
{
	printf("XXXXX\nX   X\nX   X\nX   X\nXXXXX\n");
	return 0;
}
*/

/* Exercicio 15
int main()
{
	int x;
	int n;
	int calculo = 1;
	int i = 1;

	printf("Informe o primeiro valor inteiro: ");
	scanf_s("%i", &x);
	printf("Informe o segundo valor inteiro nao negativo: ");
	scanf_s("%i", &n);

	while (i <= n)
	{
		calculo = calculo * x;
		i++;
	}

	printf("\nO resultado foi: %i", calculo);
}
*/