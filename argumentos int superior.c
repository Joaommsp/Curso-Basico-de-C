#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");d
	int i;
	
	if(argc > 1) {
		printf("Foram inseridos %d argumentos:\n", argc);
		for( i = 0 ; i < argc ; i ++ ) {
			printf("%s\n", argv[i]);
		}
	}else {
		printf("Não foram inseridos argumentos no programa.");
	}
	
}
