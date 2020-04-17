//The program must receive 10 numbers and print their amount
#include <stdio.h>
#define N 10

int main() {
	int user_input = 0;
	int i = 0;
	int result = 0;
	printf("Enter 10 numbers please:\n");
	while (i < N) {
		scanf("%d", &user_input); //Get input from the user
		result = result + user_input;
		i++;
	}
	printf("Results:%d", result);
	return 0;
}