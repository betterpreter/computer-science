#include <stdio.h>
#define N 5


void calc_MT(int arr[N][N]);
void print_MT(int arr[N][N]);

int main() {
	int arr[N][N];
	int count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = count;
			count++;
		}
	}
	print_MT(arr);
	calc_MT(arr);
	return 0;
}

void print_MT(int arr1[N][N]) { //print the matrix on the screen
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
}

void calc_MT(int arr[N][N]) { //calc all row,colum,diagonal
	int sum_row = 0;
	int sum_colum = 0;
	int sum_diagonal_r_l = 0;
	int sum_diagonal_l_r = 0;
	double avarge = 0;
	for (int i = 0; i < N; i++) {
		sum_row = 0;
		sum_colum = 0;
		avarge = 0;
		for (int j = 0; j < N; j++) {
			sum_row = sum_row + arr[i][j];
			if (i == j) { // if i=j so it is the diagonal right to left
				sum_diagonal_r_l = sum_diagonal_r_l + arr[i][j];
			}
			sum_colum = sum_colum + arr[j][i];// in order to calcute the the row we need to change the i and j places
		}
		avarge = ((sum_row) / N);
		printf("The sum of line number %d is:%d\n", i, sum_row);
		printf("The avarge of row number %d is:%2.f\n", i, avarge);
		printf("The sum_colum of line number %d is:%d\n", i, sum_colum);
		avarge = (sum_colum / N);
		printf("The avarge of colum number %d is:%2.f\n", i, avarge);
		printf("\n");
		sum_diagonal_l_r = sum_diagonal_l_r + arr[i][N - i - 1]; //in each row sum the last elemnt in order to get diagonal l_r first point is (0,) then is (1,3) (2,2) (3,1)(4,0)                
	}
	printf("The sum_colum of line number lr is:%d\n", sum_diagonal_l_r);
	avarge = (sum_diagonal_l_r / N);
	printf("The avarge left to right:%2.f\n", avarge);
	printf("The sum of diagonal r_l: %d\n", sum_diagonal_r_l);
	avarge = (sum_diagonal_r_l / N);
	printf("The avarge right to left:%2.f\n", avarge);

}