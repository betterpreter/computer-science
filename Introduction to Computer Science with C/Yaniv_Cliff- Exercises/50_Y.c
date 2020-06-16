#include <stdio.h>
#include <stdlib.h>
#define N5 5
#define N6 6
#define N7 7

int Median(int* numbers, int size);
void buble(int* arr, int size);
void swap(int *index, int *index2);
void inait(int* arr, int size);


int main() {
	int result5 = 0;
	int result6 = 0;
	int result7 = 0;
	srand((time(0)));
	int arr5[N5];
	int arr6[N6];
	int arr7[N7];
	inait(arr5, N5);
	inait(arr6, N6);
	inait(arr7, N7);
	buble(arr5, N5);
	buble(arr6, N6);
	buble(arr7, N7);
	result5 = Median(arr5, N5);
	result6 = Median(arr6, N6);
	result7 = Median(arr7, N7);
	printf("\nResult5:%d\tResult6:%d\tResult7:%d\n", result5, result6, result7);
	return 0;
}



void inait(int* arr, int size) {
	printf("N%d:\t",size);
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 10) + 1;
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
}
void swap(int *index, int *index2) {
	int temp = 0;
	temp = *index;
	*index = *index2;
	*index2 = temp;
}

void buble(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
			else {
				continue;
			}

		}
	}
}

int Median(int* numbers, int size) {
	if (size % 2 != 0) {
		return (numbers[(size - 1) / 2]);
	}
	else {
		return (numbers[(size / 2) - 1]);
	}

}