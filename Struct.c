#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void) {
	
	typedef struct 
	{
		int horas;
		int minutos;  // definindo uma estrutura e suas variáveis
		int segundos;
		double teste;
		char letra;
	} horario;
	
	horario agora; // definindo o nome da estrutura
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 40;
	
		printf("%d:%d:%d\n", agora.horas,agora.minutos,agora.segundos);
	
	horario depois;
	depois.horas = agora.horas + 10;
	depois.minutos = agora.minutos;
	depois.teste = 50.55 / 123;
	depois.letra = 'a';
		
		printf("%d\n", depois.horas);
		printf("%d\n", depois.minutos);
		printf("%.2f\n", depois.teste);
		printf("%c\n", depois.letra);
	
	system("pause");
	return 0;
}
