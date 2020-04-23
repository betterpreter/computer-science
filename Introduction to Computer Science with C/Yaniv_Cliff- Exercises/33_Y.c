/*This program will return the factorial of number*/
#include <stdio.h>

double factorial(int num);


int main() {
	int num;
	double result = 0;
	printf("Enter number please:\n");
	scanf("%d", &num);
	result = factorial(num);
	printf("Result:%.2f", result);
	return 0;
}

double factorial(int num) {
	double temp = 1;
	for (int i = 1; i <= num; i++) {
		temp = temp * i;
	}
	return temp;

}