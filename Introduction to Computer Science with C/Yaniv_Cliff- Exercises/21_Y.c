//The program must have two numbers : a, b which are positive and integers, and print a  pow with b

#include <stdio.h>


int main() {
	int a, b;
	int result = 1;
	printf("Enter two numbers please first the number then the base\nExample:2,3 - The output will be 8\n");
	scanf("%d,%d", &a, &b);
	if (((1 > a) || (a < 0)) || ((1 > b) || (b < 0))) { //The numbers are must be integers and positive.
		printf("Invaild Input - a and b are must to be positive and intergers\n");
	}
	else {
		for (int i = 0; i < b; i++) {
			result = result * a;
		}
		printf("The result is: %d", result);
	}
	return 0;

}