//The program must print all numbers from 1 to 10 in three ways

#include <stdio.h>
#define N 10

int main() {
	printf("printing from for loop:\n"); //using for
	for (int i = 0; i <= N; i++) {
		printf("%d\t", i);
	}
	printf("\n");
	printf("printing form while loop:\n");//using while
	int i = 0;
	while (i <= N)
	{
		printf("%d\t", i);
		i++;
	}
	printf("\n");
	printf("printing from do-while loop:\n");//using do-while
	int j = 0;
	do
	{
		printf("%d\t", j);
		j++;
	} while (j <= N);
	printf("\n");
	return 0;
}