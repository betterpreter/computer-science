//The program must have a number a and print the number of the pibonchy a - y.
// for example: Input:6 Output: 8  0 1 1 2 3 5 8 13 21

#include <stdio.h>


int main() {
	int user_input;
	int result = 0;
	int a1 = 0;
	int a2 = 1;
	printf("Enter you pibonchy number please: \n");
	scanf("%d", &user_input);
	if (user_input >= 0) {
		for (int i = 0; i < (user_input - 1);i++) {
			result = a1 + a2;
			a1 = a2;
			a2 = result;
		}
		printf("The result is: %d\n", result);
	}
	else {
		printf("Invaild Input Please Enterd numbers bigger or equal to 0\n");
	}
 	return 0;
}