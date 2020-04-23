//create function that will get number and return 1 if the number is even and 0 if not 

#include <stdio.h>

int even_num(int num);

int main() {
	int num;
	int result = 0;
	printf("Enter number please:\n");
	scanf("%d", &num);
	result = even_num(num);
	if (result == 1) {
		printf("The number %d is even\n",num);
	}
	else {
		printf("The number %d is not even\n",num);
	}
	return 0;
}

int even_num(int num) {
	if (num % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}