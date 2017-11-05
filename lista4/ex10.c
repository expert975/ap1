#include <stdio.h>
#include <stdint.h>

#define SIZE 6

int main()
{
	int32_t matrix[SIZE][SIZE];
	uint8_t biggerThanTen = 0;

	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("Enter position [%hhu][%hhu]: ", row, column);
			scanf("%d", &matrix[row][column]);
		}
	}

	printf("-----input-----\n");
	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("%+5d ", matrix[row][column]);
		}
		printf("\n");
	}

	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			if (matrix[row][column] > 10)
			{
				biggerThanTen++;
			}
		}
	}

	printf("Numbers bigger than 10: %d\n", biggerThanTen);

	return 0;
}
