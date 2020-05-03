//This programe will get 5 number to array and then print the sum of all the elemnet in addion print the max and the min vlaue on the array
#include <stdio.h>
#define N 5

int max_array(int* arr, int size);
int min_array(int* arr, int size);

int main() {
	int count = 0;
	int max = 0;
	int min = 0;
	int sum = 0;
	int arr[N];
	printf("Enter please 5 numbers:\n");
	while (count < 5) {
		scanf("%d", &arr[count]);
		count++;
	}
	max = max_array(arr, (sizeof(arr) / 4));
	min = min_array(arr, (sizeof(arr) / 4));
	sum = sum_array(arr, (sizeof(arr) / 4));
	printf("max number:%d\nmin number:%d\nsum number:%d", max, min, sum);
	return 0;
}
int max_array(int* arr,int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}
int min_array(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}
int sum_array(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	return sum;
}