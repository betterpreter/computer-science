/*This program wil get 3 number as a input and print the small one and the biggeset between them*/

#include <stdio.h>
int min_3(int a, int b, int c);
int max_3(int a, int b, int c);

int main() {
	int a, b, c;
	int result_min = 0;
	int result_max = 0;
	printf("Enter 3 numbers please\nExample:1,2,3\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if ((a < 0) || (b < 0) || (c < 0)) {
		printf("Invaild Input- you enterd nagtiv numbers\n");
	}
	else {
		result_min = min_3(a, b, c);
		result_max = max_3(a, b, c);
		printf("The min,max number is: %d\t%d", result_min,result_max);
	}
	return 0;

}
int max_3(int a, int b, int c) { // return the max number
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
int min_3(int a, int b, int c) {// return the min number 
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