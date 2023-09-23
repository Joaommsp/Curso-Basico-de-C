#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	char s[10];
	
	printf("Digite Algo (scanf convencional):\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	printf("Digite Algo (scanf aprimorado):\n");
	scanf("%9[^\n]s",s); //"$n-1[^\n]s"
	fflush(stdin);
	
	printf("Resultados: %s\n\n",s);
}
