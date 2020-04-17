//The program must receive numbers until the user input 0 and print their amount
#include <stdio.h>


int main() {
	int user_input = 0;
	int i = 0;
	int result = 0;
	printf("Enter numbers please when you want to stop enter 0:\n");
	do {
		scanf("%d", &user_input); //Get input from the user
		result = result + user_input;
		i++;
	} while (user_input !=0);
	printf("Results:%d", result);
	return 0;
}
