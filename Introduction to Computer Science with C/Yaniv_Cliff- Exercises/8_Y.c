//Receive an integer and a saint if the number are even or odd
#include <stdio.h>

void main() {
	int num = 0;
	printf("Enter number please:\n");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("The number %d is even", num);
	}
	else {
		printf("The number %d is odd", num);
	}
}