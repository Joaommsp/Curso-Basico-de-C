#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int n1, n2, n3, n4;
	int s;
	float m;
	
	printf("\nDigite o primeiro n�meiro: ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("\nDigite o segundo n�meiro: ");
	scanf("%d",&n2);
	fflush(stdin);
	printf("\nDigite o terceiro n�meiro: ");
	scanf("%d",&n3);
	fflush(stdin);
	printf("\nDigite o quarto n�meiro: ");
	scanf("%d",&n4);
	fflush(stdin);
	
	s = soma(n1, n2, n3, n4);
	
	printf("A m�dia � %.2f\n",media(s));
	
	system("pause");
	
	return 0;
	
}
