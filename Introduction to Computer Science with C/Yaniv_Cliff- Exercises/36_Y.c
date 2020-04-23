//This is fight card Game

#include <stdio.h>
#include <stdlib.h>

void game();
int random_number();
int win_game(user,comp);
int check_number(int num);

int main() {
	printf("Welcome to Fight Card Game\n");
	game();
	return 0;
}

int random_number() {//return random number for the computer
	int number = 0;
	srand(time(NULL));
	number = rand() % 14;
	return number;
}

void game() { // The main function of the game.
	int user_input;
	int user_point = 0;
	int comp_point = 0;
	int comp_input = 0;
	int count = 0;
	int result = 0;
	int flag;
	do {
		flag = 0;
		count++;
		printf("User number(0-joker,1-ace):\n");
		scanf("%d", &user_input);
		while (flag != 1) { //Input validtion.
			if ((user_input > 13) || (user_input < 0)) {
				printf("Invaild Input numbers 0-13\n");
				scanf("%d", &user_input);
			}
			else {
				flag = 1;
			}
		}
		user_input = check_number(user_input);
		comp_input = random_number();
		comp_input = check_number(comp_input);
		result = win_game(user_input,comp_input);
		switch (result) //see which player win in the round 
		{
			case 1:
				user_point++;
				break;
			case 2:
				comp_point++;
				break;
			default:
				continue;
			break;
		}
		printf("User:%d\tcomputer:%d\n", user_point, comp_point);
	} while (count < 13);
	if (user_point > comp_point) { //check who is the winner in the final game.
		printf("User Win the GAME\n");
	}
	else if (comp_point > user_point) {
		printf("Computer Win the GAME\n");
	}
	else {
		printf("Its a draw\n");
	}
}


int win_game(user,comp) {//Get two intger and see which of the palyers win

	if(user > comp){
		return 1;
	}
	else if (user < comp) {
		return 2;
	}
	else {
		return 3;
	}

}

int check_number(int num) { //check numbers for the cases when num=0 or num=1
	if (num == 1) {
		return 14;
	}
	else if (num == 0) {
		return 15;
	}
	else {
		return num;
	}
}