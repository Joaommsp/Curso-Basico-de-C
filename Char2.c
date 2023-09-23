#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	char s[10];
	
	printf("Digite algo ( leitura pelo gets ):\n");
	gets(s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n",s);
	
	printf("Digite algo ( leitura pelo fgets ):\n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
}
