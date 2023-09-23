
#include "calculo.h"

void maior(int n1, int n2) {
	
	if(n1 > n2) {
		printf("\nMaior: %d\n",n1);
	}
	else if(n2 > n1) {
		printf("\nMaior: %d\n",n2);
	}
	else if(n1 == n2) {
		printf("\nOs número são iguais...\n");
	}
}
