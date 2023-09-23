#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa {
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	// Criando e inicializando 
	tipo_pessoa pes = {0,0.0, "Teste"};
	
	printf("Inicio:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.peso: %s\n", pes.nome);
	
	//Atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 87.90;
	strcpy(pes.nome, "Texto"); // não é possivel atribuir à STRINGS
	
	printf("\nAlterando os valores via código:\n");
	printf("pes.idade; %d\n", pes.idade);
	printf("pes.peso %.2f\n", pes.peso);
	printf("pes.nome %s\n", pes.nome);
	
	// solicitando inserções via teclado
	
	printf("\nInsira uma idade:\n");
	scanf("%d", &pes.idade);
	fflush(stdin);
	printf("Insira um peso:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("Insira um Nome:\n");
	fgets(pes.nome,TAM,stdin);
	
	printf("Dados alterados");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.peso: %s\n", pes.nome);
	
	system("pause");
}
