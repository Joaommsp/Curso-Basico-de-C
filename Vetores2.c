#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int v[7] = {1,34,215,46,2324,763,46};
	int i;
	float soma =0;
	
	for(i = 0; i <= 7 ;i++) {
		soma += v[i]; // soma = soma + v[i];
	}
	printf("Soma: %.2f", soma);
}
