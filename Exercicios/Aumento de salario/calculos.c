#include "calculos.h"
float aumento(float salario, float percent_aumento) {
	
	float valor_aumento;
	valor_aumento = salario * percent_aumento/100;
	
	return valor_aumento;
}

float novo_salario(float salario, float aumento) {
	
	int novo = salario + aumento;
	
	return novo;
}
