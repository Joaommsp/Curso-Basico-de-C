#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
#include <locale.h>

/* Receba 2 n�mero e imprima o maior n�mero */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int num1,num2;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%d", &num1);
	fflush(stdin);
	printf("\nDigite o segundo n�mero: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	maior(num1, num2);
	
	system("pause");
	
	return 0;
}
