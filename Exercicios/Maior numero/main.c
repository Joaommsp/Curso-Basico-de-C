#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
#include <locale.h>

/* Receba 2 número e imprima o maior número */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int num1,num2;
	
	printf("\nDigite o primeiro número: ");
	scanf("%d", &num1);
	fflush(stdin);
	printf("\nDigite o segundo número: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	maior(num1, num2);
	
	system("pause");
	
	return 0;
}
