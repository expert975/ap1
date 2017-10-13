#include <stdio.h>
#include <stdint.h>

float sum = 0;
float input = 0;
uint16_t numberCount = 0;

int main() {
	printf("Enter number count: ");
	scanf("%hu", &numberCount);

	if (numberCount > 0) {
		for (uint32_t i = 0; i < numberCount; i++) {
			printf("Enter number %u: ", i + 1);
			scanf("%f", &input);
			if (input > 10 || input < 0)
			{
				printf("Number must be between 0 and 10!\n");
				i--;
			}
			else
			{
				sum += input;
			}
		}
		printf("Average: %f\n", sum/(float)numberCount);
	}

	return 0;
}
