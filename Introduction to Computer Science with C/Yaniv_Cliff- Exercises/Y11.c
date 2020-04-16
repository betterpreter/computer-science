//The program must have linear equation coefficients: ax + b and return the cut point with the x-axis
#include <stdio.h>

int main() {
	int a, b;
	int x = 0;
	printf("Enter the number of equation ax+b\nExample:The order of the input is a,b\n");
	scanf("%d,%d", &a, &b);
	if (a == 0) {
		printf("There not found cut point because a=0\n");
	}
	else {
		x = (b * (-1) / a);
		printf("The cut point with x is (%d,0)", x);
	}
	return 0;	
}