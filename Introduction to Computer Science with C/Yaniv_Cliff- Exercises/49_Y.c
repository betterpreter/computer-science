/*This programe will get a string and then sum all the digit in the string for example 0YYS4 Result:4 i didnt wrote a function that will check if the char is digit is better to create one */
#include <stdio.h>
#include <stdlib.h>
#define N 6

int SumStr(char* str);
void init(char* arr, int size);
int pow(int base, int num1);

int main() {
	int result = 0;
	char str_1[N];
	srand(time(0));
	init(str_1, N);
	result = SumStr(str_1);
	printf("Result:%d\n", result);
		return 0;
}

int pow(int base, int num1) {
	int num_ten = 1;
	for (int i = 0; i < num1-1; i++) {
		num_ten = num_ten * 10;
	}
	return (base * num_ten);
}

void init(char* arr, int size) {
	int arr1[3] = { 65,97,48 };
	int arr2[2] = { 9,25 };
	int num_rand = 0;

	for (int i = 0; i < size - 1; i++) {
		num_rand = rand() % 3;
		if (num_rand == 2) {
			arr[i] = rand() % 9 + arr1[num_rand]; //digit
		}
		else {
			arr[i] = rand() % 25 + arr1[num_rand]; //char
		}
		printf("%c\t", arr[i]);
	}
	arr[size - 1] = '\0';
}

int SumStr(char* str){
	char* p = str;
	char* start = str;
	char* end = NULL;
	int count = 0;
	int temp = 0;
	int  num = 0;
	while (*p != '\0') {
		if ((*(p + 1) == '\0') && ((*p >= 48) && (*p <= 57))) { //check here if the elemnt in the next memory == '\0' and if is digit then
			count++;
			if (count > 1) {
				end = p+1;
				while (*start != *end) {
					temp = temp + pow((*start - 48), count); //take temp and store the value of digit string such as "eli123" in the end it will be 123 intget
					start++;
					count--;
				}
				num = num + temp;
			}
			else {
				num = num + (*p - 48);
			}
			p++;
		}
		else if ((*p >= 48) && (*p <= 57) && (count == 0)) { //check for the first time if the is number and check the value of count if is 0 that mean the progame found new seris of digit
			start = p;
			count++;
			p++;
		}
		else if ((*p >= 48) && (*p <= 57)) {
			count++;
			p++;
		}
		else {
			end = p;// store the end of the addres that contain digit
			if (count == 0) {
				p++;
				continue;
			}
			else if (count == 1) { //if count is equal that mean there is only one number
				num = num + (*start - 48);
			}
			else {
				while (*start != *end) {
					temp = temp + pow((*start -48), count); //take temp and store the value of digit string such as "eli123" in the end it will be 123 intget
					start++;
					count--;
				}
			}
			num = num + temp;
			temp = 0;
			count = 0;
		}
	}
	return num;

}