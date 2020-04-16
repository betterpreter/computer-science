//The program must have two numbers n, m, and print the multiplication order of nXm

#include <stdio.h>


int main() {
	int n, m;
	printf("Enter two number please for nxm\nExample:n,m\n");
	scanf("%d,%d", &n, &m);
	for (int i = 1; i <= n; i++) {//column
		for (int j = 1; j <= m; j++) {//row
			printf("%d\t", (i*j));
		}
		printf("\n");//space for each line.
	}
	return 0;
}