#include <stdio.h>	// Neue Bibliothek - benötigt für atof
#include <stdlib.h>

long double factorial(int z) {
	int i=1;
	long double a = 1;
	while (i <= z) {
		a=i*a;
		i++;
	}
	return a;
}

long double exponentiation(long double x, int n) {
	int i=1;
	long double a = 1;
	while (i <= n) {
		a=x*a;
		i++;
	}
	return a;
}

int main(int argc, char ** argv) {
	long double x = atof(argv[1]);
	long double s = 1;
	int i = 1;
	while (i < 1000) {
		s = s + exponentiation(x,i)/factorial(i);
		i++;
	}
	printf("exp(%Lf) = %Lf\n",x,s);
	return 0;
}
		
