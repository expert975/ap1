#include <stdio.h>

const double CM_TO_INCHES = 2.54;

int main() {
	for (int i = 0; i < 20; i++) {
		printf("%2d cm = %5.2f inches\n", i + 1, ((double)i + 1)*CM_TO_INCHES);
	}
	return 0;
}
