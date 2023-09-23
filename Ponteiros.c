#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	int x ;
	x = 10;
	int *ponteiro; //Declaração de um ponteiro , ainda sem apontar para um enereço de momória;
	ponteiro = &x; // Atribuindo o valor de X ao ponteiro 
	
	printf("%d\n",x);
	printf("%d\n", &x);
	printf("\n");
	printf("Ponteiro: %d", *ponteiro); // como * , vem o valor que o endereço de memória que o ponteiro aponta ,
	//sem o * , vem o próprio endereço 
	
}

