#include <stdio.h>
#include <locale.h>
#define TAM 100

int main(int argc, int *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	int i;
	
	if( argc > 1) {
			printf("\nA fun��o possui %d Argumentos", argc);
			for(i = 0; i < argc ; i ++) {
			printf("%s\n", argv[i]);
			}
		}
				else {
			printf("A fu��o n�o pussui argumentos.");
	}

}
