//Get six values from the user set them in array and then print them

#include <stdio.h>

int main(){
	int arr[6];
	printf("Enter six number please:\n");
	int count = 0;
	while (count < 6) {
		scanf("%d", &arr[count]);
		count++;
	}
	for (int i = 0; i < 6; i++) {
		printf("The value of the elemnt %d is: %d\n", i, arr[i]);
	}
	return 0;
}