// STR ING CO PY
#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 20 // declaração de constante em C

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char origem[N] = {"Olá ,Mundo!"};
	char destino[N];
	
	printf("Antes do srtcpy:\n"); //copia o conteúdo de uma string para outra 
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
}
