//This is Guess the number Game

#include <stdio.h>
#include <stdlib.h> 
int random_number();
int win_game(int comp, int user);
void game();

int main() {
	srand(time(NULL));
	game();
	printf("Thanks...\n");
	return 0;
}


int random_number() {
	int rand_num = 0;
	rand_num = rand() % 11;
	return rand_num;
}

int win_game(int comp, int user) {
	if (user == comp) {
		return 1;
	}
	else if(user > comp) {
		return -1;
	}
	else {
		return 0;
	}
}

void game() {
	int user_input;
	int count = 0;
	int comp_input = 0;
	int result = 0;
	comp_input = random_number();
	do {
		count++;
		printf("Enter user number:\n");
		scanf("%d", &user_input);
		result = win_game(comp_input, user_input);
		if (result == 1) {
			printf("you sucssed to guess the number\nComputer:%d\tUser:%d\n", comp_input, user_input);
			
		}
		else if(result == -1) {
			printf("The number the user choose %d is bigger then the computer number\n", user_input);
			continue;
		}
		else {
			printf("The number the user choose %d is small then the computer number\n", user_input);
			continue;
		}
	} while((result!=1) && (count!=10));
}
