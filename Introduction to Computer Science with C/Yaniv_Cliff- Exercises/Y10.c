//The program must have an integer greater than 999, and check whether the 4 right digits are a series rising from left to right. Note: You must check the legality of the input.
#include <stdio.h>

int main() {
	int num;
	int temp = 0;
	int count = 0;
	printf("Enter a number please between 999-9999:\n");
	scanf("%d", &num);
	if ((num < 1000) || (num > 9999)) { //Input vaildation
		printf("Invaild input - the number you enterd %d is not in the range", num);
	}
	else {
		temp = num;
		while (temp / 10 != 0) {//The logic
			
			if ((temp % 10) > ((temp/10) % 10)) { //if the first digit on the number is bigger then the second so dived the number by 10
				temp = temp / 10;
			}
			else {
				count = 1;// if count=1 that mean the number is not series rising
				break;
			}
		}
		if (count == 0) {
			printf("The number %d is series rising\n", num);
		}
		else {
			printf("The number %d is not series rising\n", num);
		}
	}
	return 0;
}