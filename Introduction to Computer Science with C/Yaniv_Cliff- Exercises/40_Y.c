#include <stdio.h>

int Length(char* arr);
int vaild_arr(char* arr, int size);
int match(char start, char end);

int main() {
	int i = 0;
	int result = 0;
	char arr[30] = { 0 };
	printf("Enter your string please:\n");
	scanf("%s", arr);
	result = vaild_arr(arr, Length(arr));
	if (result) {
		printf("Its vaild input\n");
	}
	else {
		printf("Its not vaild input");
	}
	return 0;

}

int Length(char* arr) {
	int sum = 0;
	int i = 0;
	while (arr[i] != '\0') {
		sum = sum + 1;
		i++;
	}
	return sum;
}
int match(char start, char end) { // check for the match
	if ((start == '{') && (end == '}')) {
		return 1;
	}
	else if ((start == '(') && (end == ')')) {
		return 1;
	}
	else if ((start == '[') && (end == ']')) {
		return 1;
	}
	else {
		return 0; // and send to use message of invaild input
	}

}

int vaild_arr(char* arr, int size) {
	int flag = 0;
	if (size % 2 != 0) { // if the number element in the array is not even so it is not vaild input.
		return 0;
	}
	for (int i = 0; i < size; i++) {
		for (int j =i; j < size; j++) {
			if (arr[i] == 0 && arr[j + 1] == 0) {
				break;
			}
			else if (arr[i] == 0 || arr[j + 1] == 0){ //check if the first element or the secound is equal to zero if so continue
				continue;
			}
			else if (arr[i] == ']' || arr[i] == '}' || arr[i] == ')') {
				return 0;
			}
			else if (match(arr[i], arr[j+1])) {
				arr[i] = 0; //set zero on the array in order to know we have match
				arr[j+1] = 0;
				i = -1; // set to -1 in order to start the loop again for the first element of the array
				j = 0;
				break;
			}
			else {
				break;
			}
		}
	}
	for (int i = 0; i < size; i++) { //check for all the cases that we have two open sign such as {{ or ((
		if (arr[i] != 0) { // if in the end of all the procces there is element in the array that 
			return 0;
		}
	}
	return 1; // return 1 if the input validation is good.
}