#include <stdio.h>


int calculate_maximum(int a, int b, int c, int d){
	int max = a;
	
	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}
	if(d > max){
		max = d;
	}
	
	return max;
}

int main(void){
	int num_1, num_2, num_3, num_4;
	
	printf("Gimme 4 ints: \n");
	scanf("%d %d %d %d \n", &num_1, &num_2, &num_3, &num_4);
	
	int max = calculate_maximum(num_1, num_2, num_3, num_4);
	
	printf("Max is: %d", max);
	
	return 0;
}

