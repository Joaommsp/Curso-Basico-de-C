#include <stdio.h>

int main() {
	
	int i;
	
	for(i = 0 ; i <= 10 ; i++) {

		if( i == 5 ) {
			continue; // reinicia o laço ignorando oq está abaixo
		}				// voltando ao inicio do FOR
		
		printf("%d", i);
	}
}
