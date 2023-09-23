#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

	setlocale(LC_ALL,"Portuguese");

	int mat[3][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};

	int i, j;
	
	printf("Imprimindo uma linha específica:\n");
	for(j = 0; j < 3 ; j++) {
		printf("%d ", mat[1][j]); // imprimindo a linha 1 
	}
	
	printf("Imprimindo toda a matriz:\n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
	}
}
