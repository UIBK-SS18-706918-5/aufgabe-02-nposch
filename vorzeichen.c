#include <stdio.h>	// Neue Bibliothek - benötigt für atof
#include <stdlib.h>

int main(int argc, char ** argv) {
	float z1;
	// Einlesen der Seitenlängen
	z1 = atof(argv[1]);
	
	if(z1 < 0) {
		printf("%f is a negative number!",z1);
	}
	else if (z1 == 0) {
		printf("%f = 0",z1);

	}
	else {
		printf("%f is a positive number!",z1);
	}
	return 0;
}
