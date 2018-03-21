#include <stdio.h>	// Neue Bibliothek - benötigt für atof
#include <stdlib.h>

int main(int argc, char ** argv) {
	int z1;
	int i=1;
	long a=1;
	
	if(argc == 2) {

		z1 = atof(argv[1]);
		if (z1==0) {
			a=1;
			printf("%i! = %ld\n", z1, a);
		}
		else if (z1 < 0) {
			printf("You cannot use a negative number!");
		}
		else {

			while(i <= z1)  {
				a = a*i;
				i++;
			}
			printf("%i! = %ld\n", z1, a);
			printf("Number of Bytes: %i\n", sizeof(a));
		}
	}
	else {
		printf("You have to type in 1 Number!");
	}



	return 0;
}

//correct answer if z1 <= 20
