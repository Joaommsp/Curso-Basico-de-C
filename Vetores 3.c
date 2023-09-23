#include<stdio.h>

int main() {
	
	int v[10];
	int i;
	
	for(i = 0;i <=10 ; i++) {
		printf("Insira um dado:\n"); // colocando dados no vetor
		scanf("%d", & v[i]);
	}
	
	printf("Dados inseridos:\n");
	for(i = 0; i <= 10 ; i++) {
		printf("%d", v[i]);    // exibindo os dados inseridos
	}
}
