// STR ING CON CAT
#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50 // declara��o de constante em C

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char s1[N] = {"L�gica de "};
	char s2[N] = {"Programa��o!"};
	
	printf("Antes do srtcat:\n");
	printf("str1: %s\n",s1);
	printf("str2: %s\n",s2);
	
	strcat(s1,s2);
	
	printf("Depois do strcat:\n"); // concatenando as strings
	puts(s1);
}
