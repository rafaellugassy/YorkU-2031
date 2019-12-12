#include <stdio.h>

void main(){

	int input = 0;
	int sum = 0;

	do {
		sum += input * input;
		scanf("%d", &input);
	} while (input >= 0);

	printf("%-10d\n", sum);

}
