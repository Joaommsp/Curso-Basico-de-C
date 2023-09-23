#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {
	
	int num, mult, res;
	
	for( num = 1 ; num <= 10 ; num++ ) {
		
		for(  mult = 1; mult <= 10 ; mult ++){
			printf("numero :%d\n",num);
			res = num*mult;
			printf("%d ", res);
		}
		
	}
	
}
