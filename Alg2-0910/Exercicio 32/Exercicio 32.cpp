#include "pch.h"
#include <iostream>

int main()
{
	int filhos, habitantes;
	float salario, med_sal, maior_sal, med_fil, sal_baixo;

	med_sal = 0;
	maior_sal = 0;
	med_fil = 0;
	salario = 0;
	filhos = 0;
	habitantes = 0;
	sal_baixo = 0;

	while (salario >= 0)
	{
		printf("Informe o salario do habitante (encerre o programa com um salario negativo): ");
		scanf_s("%f", &salario);
		if (salario >= 0)
		{
			printf("Informe a quantidade de filhos: ");
			scanf_s("%i", &filhos);
			med_fil = med_fil + filhos;
			med_sal = med_sal + salario;
			if (salario > maior_sal)
				maior_sal = salario;
			if (salario <= 100)
				sal_baixo = sal_baixo + 1;
			habitantes = habitantes + 1;
		}
		else
			printf("Programa encerrado\n");
	}

	med_sal = med_sal / habitantes;
	med_fil = med_fil / habitantes;
	sal_baixo = sal_baixo * 100 / habitantes;

	printf("A media do salario da populacao e de: %f Reais\n", med_sal);
	printf("A media do numero de filhos e de: %f\n", med_fil);
	printf("O maior salario e de: %f Reais\n", maior_sal);
	printf("O percentual de pessoas com salario ate R$100,00 e de: %f porcento \n", sal_baixo);

	return 0;
}