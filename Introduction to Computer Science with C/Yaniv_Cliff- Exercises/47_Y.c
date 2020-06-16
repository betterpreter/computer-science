/*This program will get array of intger and then PRINT ALL the ascii vaules*/
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
	return 0;
}


void init(int* arr, int size) { // initate array with intger values
	printf("The rand numbers:\n");
	int arr1[2] = {65,97}; //random numbers betweem a-z && A-Z
	int num = 0;
	for (int i = 0; i < size; i++) {
		num = rand() % 2;
		arr[i] = rand() % 25  + arr1[num];
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void str_arr(int* arr, int size) { // change the array to char value by adding the ascii value
	for (int i = 0; i < size; i++) {
		printf("%c\t", arr[i]);
	}
	printf("\n");
}