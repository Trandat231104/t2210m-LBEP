#include <stdio.h>

void lamtron() {
	float x; // Hoa hong dat duoc
	float a; // doanh so dat duoc
	scanf("%f", &a);
	int b = 100; // dai dien cho doanh so 100 trieu
	int c = 300; // dai dien cho doanh so 300 trieu

	if (a <= b) {
		x = a * 5 / b;
		printf("%f", x);
	} else if (a <= c) {
		x = a * 10 / c;
		printf("%f", x);
	} else if (a > c) {
		x = a * 20 / c;
		printf("%f", x);
	}
}

int main () {
	lamtron();
	return 0;
}

