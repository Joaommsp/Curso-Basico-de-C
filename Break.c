#include <stdio.h>

int main() {
	
	int i;
	
	for(i = 0 ; i <= 10 ; i++) {
		printf("%d ",i);
		
		if( i == 8) {
			break; // encerramento do la�o
		}
	}
}
