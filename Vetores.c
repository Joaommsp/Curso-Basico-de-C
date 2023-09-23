#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int v[5], i;
	float m	;
	
	v[0] = 65;
	v[1] = 81;
	v[2] = 92;
	v[3] = 34;
	v[4] = 10;
	
	
	for(i = 0; i <= 4 ; i++) {
		printf("%d\n",v[i]);			
	}
	for(i = 0; i <= 4 ; i++) {
		m += v[i];
	}	
		printf("Resultado da soma: %.2f",m);
			
}
