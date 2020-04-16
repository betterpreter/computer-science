//The program must print all numbers from 1 to 10 except 7.

#include <stdio.h>
#define N 10
int main() {

	int i = 1;
	while (i <= 10) {
		if (i != 7) {
			printf("%d\t", i);
			i++;
		}
		else {
			i++;
		}
	}
	return 0;
}