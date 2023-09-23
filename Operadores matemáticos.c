#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
 	float A, B, soma, subtr, multi, div;
	
	printf("Digite o valor de A:\n");
	scanf("%f", &A);
	
	printf("Digite o valor de B:\n");
	scanf("%f", &B);

	soma = (A + B) * ( A * B);
	subtr = A - B;
	multi = A * B;
	div = A / B	;
	
	printf("Resultados:\n");
	printf("Soma: %.2f\n", soma);
	printf("Subtração: %.2f\n", subtr);
	printf("Multiplicação: %.2f\n", multi);
	printf("Divisão: %.2f\n", div);
}
