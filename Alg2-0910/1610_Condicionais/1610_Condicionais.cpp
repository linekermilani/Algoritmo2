// 1610_Condicionais.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int main()
{	
	//SE
	//Conectores Logicos
	// "e" - &&
	// "ou" - || (pipe pipe)
	
	if (true) // Resultado da operacao pode ser apenas (true ou falso)
			  
	{// Operador logico sempre entre 2 operandos
		// este codigo sera executado
	}

	if (false)
	{
			// este codigo nao sera executado
	}
    
	int a = 0;

	if (a == 0)
	{
		printf("A igual a zero\n");
	}

	if (a != 0)
	{
		printf("A diferente de zero\n");
	}

	int b = 5;
	if (b < a)
	{
		printf("B menor que A\n");
	}

	if (a <= b) // a pode ser menor, pode ser igual e pode ser diferente
	{
		printf("A menor ou igual a B\n");
	}

	if (a == b)
	{
		printf("A e B são iguais\n");
	}
	else // senao
	{
		printf("A e B são diferentes\n");
	}
	
}

