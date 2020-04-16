//על התוכנית לקלוט 3 מספרים שלמים מהמשתמש ולהדפיס את הממוצע של שלושתם.

#include <stdio.h>

void main() {
	int num1, num2, num3;
	float avg = 0;
	printf("Enter 3 Numbers please and you will get the average of them\nExample:60,65,60\n");
	scanf("%d,%d,%d", &num1, &num2, &num3);
	avg = (num1 + num2 + num3) / 3;
	printf("[+] The avg value is: %.2f\n", avg);

}