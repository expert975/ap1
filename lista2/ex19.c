#include <stdio.h>
#include <stdint.h>

float input = 0;
float biggest = 0, smallest = INT32_MAX;

int main() {
	for (int i = 0; i < 5; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%f", &input);

		if (input > biggest)
			biggest = input;
		else if(input < smallest)
			smallest = input;
	}
	printf("Biggest: %f\n", biggest);
	printf("Smallest: %f\n", smallest);

	return 0;
}
