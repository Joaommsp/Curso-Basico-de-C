#include "poligono.h"
#include <math.h>

float calcPrimetroTri(float a, float b , float c){
	
	return a + b + c;
	
}


float calPerimetroRet(float a, float b) {
	
	return 2*b + 2*a;
	
}


float calcPerimetroCir(float r) {
	
	2 * PI * r;
	
}

float calcAreaTri(float b, float a) {
	
	return (b*a)/2;
	
}

float calcAreaRet(float b, float a) {
	
	return b*a;
	
}

float calcAreaCir(float r) {
	
	return 2*PI*pow(r,2);
	
}

