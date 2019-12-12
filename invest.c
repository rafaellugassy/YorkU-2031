#include <stdio.h>

void main(){
	float var;
	scanf("%.2f", &var);
	while (!feof(stdin)){
	scanf("%.2f", &var);
	}
	printf("%.2f", var);
}
