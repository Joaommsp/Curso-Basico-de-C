// STR ING CO PY
#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 20 // declara��o de constante em C

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char origem[N] = {"Ol� ,Mundo!"};
	char destino[N];
	
	printf("Antes do srtcpy:\n"); //copia o conte�do de uma string para outra 
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
}
