//Write a program with a function that receives float values: a, b and emits the solution to the equation: ax + b = 0

#include <stdio.h>

void equation(int a, int b); //function declaration 

int main() {
	int a, b;
	printf("Enter your a and b for the following equation ax+b=0\nExample:a,b\n");
	scanf("%d,%d", &a, &b);
	equation(a, b);
	return 0;
}

void equation(int a, int b) { //function implementation
	float result = 0;
	if (a == 0) {
		printf("Invaild result - when a=0 the equation is 0*x + b = 0\n");
	}
	else {
		result = ((b * -1) / a);//equation
		printf("The result is:%.2f\n", result);
	}
}