#include "stdafx.h"
#include <iostream>

typedef struct horario {
	int horas;
	int minutos;
}Horario;

int main()
{
	Horario h;
	int x, y;
	printf("informe  os minutos: ");
	scanf_s("%d", &h.minutos);
	y = h.minutos / 60;
	x = h.minutos % 60;
	printf("%.2d:%.2d\n", y, x);
	
	return 0;
}