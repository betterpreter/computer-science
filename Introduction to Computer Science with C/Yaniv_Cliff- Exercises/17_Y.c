//The program must receive a number from the user and print his factorial value. integrity should be checked, in this case if the number is negative, a proper message must be given as the factorial function is not configured for negative numbers.

#include <stdio.h>

int main() {
	int num;
	int result = 1; //result will store the values of the factorial
	printf("Enter number please and get the factorial:\n");
	scanf("%d", &num);
	if (num > 0) {
		for (int i = 1; i <= num; i++) { //The loop fact
			result = result * i;
		}
		printf("The result fact is:%d\n", result);
	}
	else {
		printf("Fact funcation didnt accept nagtive numbers\n");
	}
	return 0;
}