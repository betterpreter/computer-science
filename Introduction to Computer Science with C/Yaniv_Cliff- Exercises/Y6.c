//על התוכנית לקלוט 3 מספרים ולהדפיס את הגדול מביניהם

#include <stdio.h>

void main() {
	int num1, num2, num3;
	printf("Please enter 3 number in the following pattern\nExample:1,2,3\n");
	scanf("%d,%d,%d", &num1, &num2, &num3);
	if ((num1 >= num2) && (num1 >= num3)) { //check all the cases
		if (num2 >= num3) {

			printf("1:%d\t2:%d\t3:%d", num1, num2, num3);
		}
		else {
			printf("1:%d\t2:%d\t3:%d", num1, num3, num2);
		}	
	}
	else if ((num2 >= num1) && (num2 >= num3)) {
		if (num1 >= num3) {
			printf("1:%d\t2:%d\t3:%d", num2, num1, num3);
		}
		else {
			printf("1:%d\t2:%d\t3:%d", num2, num3, num1);
		}
	}
	else if ((num3 >= num1) && (num3 >= num2)) {
		if (num1 >= num2) {
			printf("1:%d\t2:%d\t3:%d", num3, num1, num2);
		}
		else {
			printf("1:%d\t2:%d\t3:%d", num3, num2, num1);
		}
	}

}