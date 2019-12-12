#include <stdio.h>
#include <math.h>

void main(){
	int in;
	while (scanf("%d", &in) != EOF){
		int value = 0;
		int nums[10] = {0};
		int i;
		for (i = 10; in / (i/10) != 0; i *= 10){
			nums[(in % i) / (i / 10)]++;
		}
		
		int n = 1;
		for (i = 10; in / (i/10) != 0; i *= 10){
			if(nums[(in % i) / (i / 10)] > 1){
				nums[(in % i) / (i / 10)]--;
			}
			else{
				value += (in % i) / (i / 10) * n;
				n *= 10;
			}	
		}
		printf("%d\n", value);
	}
}
