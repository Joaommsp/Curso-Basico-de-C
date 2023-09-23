#include <stdio.h>
#include <locale.h>

void imprime(int m[][4], int n) {
	int i , j;
	for(i = 0; i < n; i++) {
		for(j = 0; j < 4; j++) {
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	int mat[3][4];
	int i, j;
	
	for(i = 0; i < 3; i++){
		printf("Digite a linha %d\n ", i+1);
		for(j = 0; j < 4; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	imprime(mat,3);
}
