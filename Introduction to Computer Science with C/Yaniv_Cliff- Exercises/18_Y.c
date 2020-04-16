//The program must obtain a number and calculate the sum of its digits.

#include <stdio.h>

int main() {
	int num;
	printf("Enter your number please:\n");
	scanf("%d", &num);
	int temp = 0;
	int sum = 0;
	temp = num;//making all the changes on other variable.
	while (temp != 0) { //stop when the number is equal to zero value
		sum = sum + (temp % 10);// add each time a digit.
		temp = temp / 10;
	}
	printf("The result is : %d", sum);
	return 0;
}