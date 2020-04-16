#include <stdio.h>


void main() {
	int num1 = 0;
	int num2 = 0;
	printf("please enter two numbers in the following pattern\nExample: 1,2\n");
	scanf("%d,%d", &num1,&num2);
	printf("There is all the 4 action that required\n%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d", num1, num2, (num1 + num2), num1, num2, (num1 - num2), num1, num2,(num1 * num2), num1, num2,(num1 / num2));

}