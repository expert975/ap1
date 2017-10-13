#include <stdio.h>

int input;
int counter;
int divider;

int main() {
	printf("Enter a prime candidate: ");
	scanf("%d", &input);

	if (input > 0) {
		divider = input - 1;

		while (divider > 1) {
			if (input%divider == 0 ) {
				break;
			}
			divider--;
		}

		if (divider == 1)
			printf("The number %d is a prime!\n", input);
		else
		printf("Can be divided by %d\n", divider);
	}

	return 0;
}
