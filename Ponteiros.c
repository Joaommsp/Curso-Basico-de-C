#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	int x ;
	x = 10;
	int *ponteiro; //Declara��o de um ponteiro , ainda sem apontar para um enere�o de mom�ria;
	ponteiro = &x; // Atribuindo o valor de X ao ponteiro 
	
	printf("%d\n",x);
	printf("%d\n", &x);
	printf("\n");
	printf("Ponteiro: %d", *ponteiro); // como * , vem o valor que o endere�o de mem�ria que o ponteiro aponta ,
	//sem o * , vem o pr�prio endere�o 
	
}

