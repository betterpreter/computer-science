//get 10 numbers and set them in array then print all the values in the array

#include <stdio.h>
#define N 10
int main() {
	int arr[10];
	int count = 0;
	printf("Enter 10 numbers please:\n");
	while (count < N) { // get the input
		scanf("%d", &arr[count]);
		count++;
	}
	for (int i = 0; i < (sizeof(arr)/4); i++) { //print all the values in the array
		printf("The elemnt number %d is: %d\n", i, arr[i]);
	}
	return 0;
}