#include <stdio.h>

int main() {
	
	int i;
	
	for(i = 0 ; i <= 10 ; i++) {

		if( i == 5 ) {
			continue; // reinicia o la�o ignorando oq est� abaixo
		}				// voltando ao inicio do FOR
		
		printf("%d", i);
	}
}
