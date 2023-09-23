#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "calculo.h"

/* Faça um programa que receba o tempo em segundo  e mostre  tempo em horas , minutos e segundos*/

int main( int argc, int argv[] ) {
	
	int s;
	
	printf("Informe quanto segundos para ver detalhes ");
	scanf("%d", &s);
	fflush(stdin);
	definir_hora(s);
	system("pause");
}
