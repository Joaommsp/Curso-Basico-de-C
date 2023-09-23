#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include <locale.h>

/* Faça um programa que receba o salário de um funcionário e o pércentual de aumento,
 calcule e mostre o aumento e o novo salario*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float s, percent, a;
	
	printf("\nDigito o valor do salário:\n");
	scanf("%f",&s);
	fflush(stdin);
	printf("Salário Atual: R$%.2f",s);
	printf("\nDigite a %% de aumento:\n");
	scanf("%f",&percent);
	fflush(stdin);
	
	a = aumento(s, percent);
	
	printf("\nO valor do aumento foi %.2f\n", a);
	system("pause");
	
	printf("\nO novo salário é de %.2f", novo_salario(s,a));
	
	return 0;
}
