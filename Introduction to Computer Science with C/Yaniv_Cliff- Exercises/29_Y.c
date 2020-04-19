//Write a program with a function that gets 3 real numbers and prints their multiples.
#include <stdio.h>

void multi_nums(int a, int b, int c);

int main() {
	int a, b, c;
	printf("Enter 3 numbers please\nExample: 1,2,3\n");
	scanf("%d,%d,%d", &a, &b, &c);
	multi_nums(a, b, c);
	return 0;
}

void multi_nums(int a, int b, int c) {
	printf("Result:%d\n", (a*b*c));
}