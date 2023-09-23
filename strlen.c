// STRING LENGHT
#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50 

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char str[N];
	int i; // variável de controle
	
	printf("Digite um texto:\n");
	fgets(str,N,stdin);
	fflush(stdin);
	
	i = strlen(str);
	printf("Tamanho do texto: %d\n", i);
	
	printf("impressão de posição a posição");
	for(i = 0 ; i < strlen(str); i ++) {
		printf("%c[%d]", str[i],i);
	}
}
