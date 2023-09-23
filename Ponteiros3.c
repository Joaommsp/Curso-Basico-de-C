#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void) {
	
	typedef struct {
		int hora;
		int minuto;
		int segundo;
	} horario;
	
	horario agora, *depois;
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 20;
	depois->segundo = 20;
	
	printf("%d:%d:%d", agora.hora, agora.minuto, agora.segundo);
	
	getchar();
	return 0;
	
}
