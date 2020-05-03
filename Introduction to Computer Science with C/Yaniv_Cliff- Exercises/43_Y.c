#include <stdio.h>
#define N 30
#define I 5

void print_Matrix(char arr[I][N]);
void InsertMatrix(char arr[I][N]);

int main() {
	char arr[N][N];
	InsertMatrix(arr);
	print_Matrix(arr);
	return 0;
}

void InsertMatrix(char arr[I][N]) { //Set Value on the 2D array
	printf("Enter your names:\n");
	for (int i = 0; i < I; i++) {
		scanf("%s", &arr[i]);
	}
}

void print_Matrix(char arr[I][N]) { //print_matrix
	printf("\nThe final 2D array is:\n");
	for(int i = I-1; i >=0; i--) { //print the reverse matrix 
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == '\0') {// if its the end of the string so print \n and then break
				printf("\n");
				break;
			}
			else {
				printf("%c", arr[i][j]);
			}
		}
	}
}