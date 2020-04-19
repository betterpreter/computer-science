//write function that prints a maximum of 20 residents on the screen.

#include <stdio.h>

void print_20();

int main() {
	print_20();
	return 0;
}

void print_20(){
	for (int i = 0; i < 20; i++) {
		printf("A");
	}
}