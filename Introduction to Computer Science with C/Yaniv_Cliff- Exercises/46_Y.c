/*This program will get array of intger and then bring the array as a strings*/
#include <stdio.h>
#include <stdlib.h>

#define N 5

void init(int* arr, int size);
void str_arr(int* arr, int size);

int main() {
	int arr[N];
	srand(time(0));
	init(arr, N);
	str_arr(arr, N);
	for (int i = 0; i < N; i++) {
		printf("%c\t", arr[i]);
	}
	return 0;
}


void init(int* arr, int size) { // initate array with intger values
	printf("The rand numbers:\n");
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 9 + 1;
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void str_arr(int* arr, int size) { // change the array to char value by adding the ascii value
	for (int i = 0; i < size; i++) {
		arr[i] = 48 + arr[i]; // 48 -ascii == 1 
	}
}