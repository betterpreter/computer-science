//The program must print all the even numbers from 0 to 100 using the for loop

#include <stdio.h>
#define N 100 // you can change here the value.

int main() {
	for (int i = 0; i <= N; i++) {
		if (i % 2 == 0) { //check if even
			printf("%d\t", i);
		}
		else {
			continue;
		}
	}
	return 0;
}