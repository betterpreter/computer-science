//על התוכנית לקבל מספר מן המשתמש ולהחזיר את הערך המוחלט שלו.
#include <stdio.h>


void main() {
	int user_input = 0;
	printf("Enter number please:\n");
	scanf("%d", &user_input);
	if (user_input < 0) {
		printf("The result is: %d", (user_input * (-1)));
	}
	else {
		printf("The result is: %d", (user_input));
	}
}