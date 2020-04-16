//The program must obtain a number n and print the multiplication plotter of nXn

#include <stdio.h>

int main() {
	int n;
	printf("Enter number please:\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {// nested loop  i for the colums j for the rows
		for (int j = 1; j <= n; j++) {
			printf("%d\t",(i*j));
		}
		printf("\n");//space between each line.
	}
	return 0;
}