// 2011_Structs.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

/*
struct Carro
{
	char modelo[10];
	char marca[10];
	int ano;
	char cor[10];
	char placa[8];
};

void LerDadosCarro()
{
	struct Carro meuCarro;

	printf("Digite o modelo: ");
	//fgets(meuCarro.modelo, 10, stdin);
	gets_s(meuCarro.modelo);

	printf("Digite a marca: ");
	fgets(meuCarro.marca, 10, stdin);

	printf("Digite o ano: ");
	scanf_s("%i", &meuCarro.ano);
	gets_s(meuCarro.cor);

	printf("Digite a cor: ");
	fgets(meuCarro.cor, 10, stdin);

	printf("Digite a placa: ");
	fgets(meuCarro.placa, 8, stdin);
}

int main()
{
	LerDadosCarro();
}
*/

struct Pessoa
{
	char nome[20];
	int cpf[11];
	int data;
	double salario;
};

void LerDadosFuncionario()
{
	struct Pessoa DadosFuncionario;

	printf("Informe seu nome: ");
	gets_s(DadosFuncionario.nome);

	printf("Informe seu cpf: ");
	scanf_s("%i", &DadosFuncionario.cpf);

	printf("Informe a sua data de nascimento: ");
	scanf_s("%i", &DadosFuncionario.data);

	printf("Informe seu salario: ");
	scanf_s("%f", &DadosFuncionario.salario);
}

int main()
{
	int i = 1;
	for (int i = 1; i <= 5; i++);
	LerDadosFuncionario();
	i++;
}