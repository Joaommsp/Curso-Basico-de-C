#include <stdio.h>

int main() {
	
	int idade = 0;
	float peso = 0.0;
	
	printf("Valor inicial da idade: %d\n", idade);
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite seu peso:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d\n", idade);
	printf("Pesp informado: %.2f.\n",peso);
}
