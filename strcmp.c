// STR ING  COMP ARE
#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50 

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char hardtext[N] = {"/exit"};
	char senha_user[N];
	int ok;
	
	printf("Digite um texto:\n");
	gets(senha_user);
	fflush(stdin);
	puts(senha_user);
	
	ok = strcmp(hardtext, senha_user);
	printf("%d",ok);
	
	if( ok == 0 ) {
		printf("Senha correta\n");
	}
	else {
		printf("Senha incorreta\n");
	}
}

