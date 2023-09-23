#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {
	
	int x = 10 ;
	int *ponteiro;
	ponteiro = &x;
	
	int y = 20;
	*ponteiro = y; // alteração do valor no endereço de memória do ponteiro , ou seja &x que era 10 passou para y , que é 20
	
	printf("%d %d",x , y);
}
