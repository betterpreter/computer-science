/*This program wil get 3 number as a input and print the small one between them*/

#include <stdio.h>
int min_3(int a, int b, int c);

int main() {
	int a, b, c;
	int result = 0;
	printf("Enter 3 numbers please\nExample:1,2,3\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if ((a < 0) || (b < 0) || (c < 0)) {
		printf("Invaild Input- you enterd nagtiv numbers\n");
	}
	else {
		result = min_3(a, b, c);
		printf("The min number is: %d", result);
	}
	return 0;

}
int min_3(int a, int b, int c) {
	if ((a <= b) && (a <= c)) {
		return a;
	}
	else if ((b <= a) && (b <= c)) {
		return b;
	}
	else {
		return c;
	}
}