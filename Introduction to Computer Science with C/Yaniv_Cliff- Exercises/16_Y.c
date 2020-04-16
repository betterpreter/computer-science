//The program must print all numbers between 0 and 100 that do not divide by 3 and 7 (together).
#include <stdio.h>
#define N 100
int main() {
	for (int i = 0; i <= N; i++) {
		if ((i % 3 == 0) || (i % 7 == 0)) {
			printf("%d\t", i);
		}
	}
	return 0;
}