#include <stdio.h>
int random;

int main() {
	int lel = 4;
	int* lelptr = &lel;
	random = getRandomNumber(*lelptr);
	printf("%d", random);
	return 0;
}

int getRandomNumber(int *lelptr) {
	printf("%d", lelptr);
	return 4;
}
