#include "calculo.h"

void definir_hora(int segundo) {
	
	int hora, minuto;
	
	hora = segundo / 3600;
	minuto = (segundo % 3600)/ 60;
	segundo = segundo % 60;
	
	printf("\nResultado %dh:%dm:%ds\n ", hora, minuto, segundo);
}
