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
		printf("a igual a zero\n");
	}

	if (a != 0)
	{
		printf("a diferente de zero\n");
	}


	system("pause");
}

