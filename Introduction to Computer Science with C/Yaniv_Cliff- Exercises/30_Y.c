//Write a function that receives 3 real numbers greater than 0 as parameters and returns the largest.
#include <stdio.h>
int max_3(int a, int b, int c);

int main() {
	int a, b, c;
	int result = 0;
	printf("Enter 3 numbers please\nExample:1,2,3\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if ((a < 0) || (b < 0) || (c < 0)) {
		printf("Invaild Input- you enterd nagtiv numbers\n");
	}
	else {
		result = max_3(a, b, c);
		printf("The max number is: %d", result);
	}
	return 0;
	
}
int max_3(int a, int b, int c) {
	if ((a >= b) && (a >= c)) {
		return a;
	}
	else if ((b >= a) && (b >= c)) {
		return b;
	}
	else {
		return c;
	}
}