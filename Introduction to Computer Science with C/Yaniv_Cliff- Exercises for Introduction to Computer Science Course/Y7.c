//על התוכנית לקלוט מהמשתמש מספר ממשי ולהדפיס פלט מתאים
#include <stdio.h>

void main() {
	int num = 0;
	printf("Enter number please:\n");
	scanf("%d", &num);
	if (num > 1) {
		printf("high number\n");
	}
	else if ((num <= 1) && (num >= -1)) {
		printf("median number\n");
	}
	else {
		printf("low number");
	}

}