#include <stdio.h>
#include <stdint.h>

int input = 0;
int32_t biggest = INT32_MIN;
int32_t smallest = INT32_MAX;

int main() {
	for (int i = 0; i < 5; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &input);

		if(input%2 == 1)
		{
			if (input > biggest)
				biggest = input;
			if(input < smallest)
				smallest = input;
		}
	}
	printf("Biggest: %d\n", biggest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
