#include <stdio.h>

#define Q '#'

void parede(int a) {
	for(int i = 0; i < a; i++) {
		printf("%c", Q);
	}
	printf("\n");
}

void casa(int h, int t = 6) {
	for(int x = 0; x < t; x++) {
		parede(h);
	}
	printf("\n");
}

int main() {
	casa(3);
	casa(9);
	casa(15);
	casa(9);
	casa(20);
	
	return 0;
}
