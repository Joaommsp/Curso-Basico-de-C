#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]){

	int i, atual, n1, n2;
	n1 = 0;
	n2 = 1;
	
	for(i = 0; i < 8 ; i ++) {	
	atual = n1 + n2;
	n1 = n2;
	n2 = atual;
	
			
	 printf("%d ", atual);
	
	}
	
}
