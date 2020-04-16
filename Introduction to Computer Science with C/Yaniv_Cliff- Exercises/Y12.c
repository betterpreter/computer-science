//The program must receive two parameters from the user: divider and target number. The program will print all numbers that divide by the same number up to the target number (not including)
#include <stdio.h>

int main() {
	int div_num, target_num;
	printf("Enter please dived number then enter the target range\nExample:12,50\n");
	scanf("%d,%d", &div_num, &target_num);
	if (div_num == 0) {
		printf("Cannot divide by zero‬\n");
	}
	else {
		for (int i = div_num; i < target_num; i++) { //i=div_num because it is clearly that all the number under our div_num is not dived by him
			if (i % div_num == 0) {
				printf("%d\t", i);
			}
			else {
				continue;
			}
		}
	}
	return 0;
}