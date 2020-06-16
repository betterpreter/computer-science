#include <stdio.h>
#include <stdlib.h>
#define N 3
#define I 3

void print_Matrix(int arr[I][N]);
void InsertMatrix(int arr[I][N]);
void max_Matrix(int arr[I][N], int* ptr, int size);
int min_Matrix(int arr[I][N]);


int main() {
	int arr[N][N];

	InsertMatrix(arr);
	print_Matrix(arr);
	int ptr[3];
	max_Matrix(arr, ptr, (sizeof(ptr) / 4));
	printf("The min value are:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d\t", ptr[i]);
	}
	return 0;
}

void InsertMatrix(int arr[I][N]) { //Set Value on the 2D array
	srand(time(NULL));
	for (int i = 0; i < I; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = rand() % 11;
		}
	}
}

void print_Matrix(int arr[I][N]) { //print_matrix
	printf("\nThe final 2D array is:\n");
	for (int i = 0; i < I; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

int min_Matrix(int arr[I][N]) { // i did that in order to create a genraic programe the will handle with all the values in R+
	int min = 11;
	for (int i = 0; i < I; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	return min;

}

void max_Matrix(int arr[I][N], int* ptr, int size) {
	int temp = 0;
	int count = 0;
	int index_x = 0;
	int index_y = 0;
	int max = min_Matrix(arr);
	while (count < size) {
		for (int i = 0; i < I; i++) {
			for (int j = 0; j < N; j++) {
				if ((arr[i][j] > max)) {
					max = arr[i][j];
					index_x = i;
					index_y = j;
				}
			}
		}
		ptr[count] = max;
		max = min_Matrix(arr);
		arr[index_x][index_y] = -1;
		count++;
	}

}