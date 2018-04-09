#include <stdio.h>
#include <stdlib.h>

int z;
int true = 1;

int prime () {
	int i = 2;
	if (z == 1) {
		true = 0;
	}
	while (i < z/2+1) {
		if (z%i == 0) {
			true = 0;
			break;
		}
		i++;
	}
	return 0;
}	

int main (int argc, char ** argv) {
	if (argc == 2) {
		z = atof(argv[1]);
		if (z <= 0) {
			printf("You have to type in ONE  positive number.");
		}
		else {
			prime();
			if (true == 1) {
				printf("Your number is a prime.");
			}
			else {
				printf("Your number is NOT a prime.");
			}
		}
	}
	else {
		printf("You have to type in ONE positive number.");
	}
	return 0;
}
