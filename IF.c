#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float nota;
	
	printf("Digite a Nota do aluno:\n");
	scanf("%f",&nota);
	
	if(nota >= 5) {
		printf("O aluno est� APROVADO\n");
	}
	else {
		printf("O aluno est� REPROVADO\n");
	}
}
