/*pointers - get 3 addres of three numbers and array with 3 number and set in each addres the max,med,min*/
#include <stdio.h>
#include <stdlib.h>
#define N 3

void init(int* arr, int size);
void SetOrder(int* numbers, int* min, int* med, int* max);

int main() {
	srand(time(0));
	int arr[3];
	int min = 0;
	int med = 0;
	int max = 0;
	init(arr, N);
	SetOrder(arr, &min, &med, &max);
	printf("Max:%d\tMeduim:%d\tMin:%d\n", max, med, min);
	return 0;
}

void init(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void SetOrder(int* numbers, int* min, int* med, int* max) {
	*max = 0;
	*med = 0;
	*min = 0;
	for (int i = 0; i < N; i++) {
		if (numbers[i] >= *max) {
			*min = *med;
			*med = *max;
			*max = numbers[i];
			
		}
		else if( *med < numbers[i])
		{
			*min = *med;
			*med = numbers[i];
		}
		else {
			*min = numbers[i];
		}

	}
}