//The program must receive a number and print an appropriate message if the number is initial.
#include <stdio.h>

int main() {
	int user_input = 0;
	int flag = 0;
	printf("Enter your number please:\n");
	scanf("%d", &user_input);
	for(int i = 1; i <= user_input; i++) {
		if (user_input % i == 0) {
			flag++;
		}
		else {
			continue;
		}
	}
	if (flag == 2) {
		printf("%d is prime number\n",user_input);
	}
	else {
		printf("%d isnt prime number", user_input);
	}
	return 0;
}