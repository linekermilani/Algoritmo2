// Exercicio 23 ao 26.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

/* Exercicio 23
int main()
{
	float tempo, velocidade, distancia, litros;

	tempo = 0;
	distancia = 0;
	velocidade = 0;
	litros = 0;

	printf("Informe o tempo gasto na viagem em minutos: ");
	scanf_s("%d", &tempo);
	printf("Informe a velocidade media durante a viagem: ");
	scanf_s("%d", &velocidade);

	tempo = tempo / 60;
	distancia = tempo * velocidade;
	litros = distancia / 12;

	printf("A velocidade media durante a viagem foi de: %d km/h\n", velocidade);
	printf("O tempo gasto na viagem foi de: %d horas\n", tempo);
	printf("A distancia percorrida foi de: %d  km\n", distancia);
	printf("A quantidade de litros utilizados foi de: %d  litros\n", litros);

	return 0;
}
*/

/* Exercicio 24
int main()
{
	float a, b, trocado;

	printf("Informe um valor para A: ");
	scanf_s("%d", &a);
	printf("Informe um valor para B: ");
	scanf_s("%d", &b);

	trocado = a;
	a = b;
	b = trocado;

	printf("Novo valor de A: %d\n", a);
	printf("Novo valor de B: %d\n", b);

	return 0;
}
*/

/* Exercicio 25
int main()
{
	float salario, salarioliq;

	printf("Informe seu salario: ");
	scanf_s("%d", &salario);
	salarioliq = (salario * 0.90) * 0.95;

	printf("Seu salario liquido e de: %d Reais\n", salarioliq);
	return 0;
}
*/

// Exercicio 26
int main()
{
	int ano, mes, dia, total;

	printf("Ano de nascimento: ");
	scanf_s("%i", &ano);
	printf("Mes de nascimento: ");
	scanf_s("%i", &mes);
	printf("Dia de nascimento: ");
	scanf_s("%i", &dia);

	total = ((2018 * 360) + (30 * 10) + 8) - ((ano * 360) + (mes * 30) + dia);

	printf("Sua idade em dias e de: %i\n", total);
	return 0;
}