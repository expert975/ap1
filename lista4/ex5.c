#include <stdio.h>
#include <stdint.h>

#define SIZE 6

int main()
{
	int32_t matrix[SIZE][SIZE];
	int32_t tmpVar;

	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("Enter position [%hhu][%hhu]: ", row, column);
			scanf("%d", &matrix[row][column]);
		}
	}

	printf("-----before-----\n");
	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("%+5d ", matrix[row][column]);
		}
		printf("\n");
	}

	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			if (column%2 == 0)
			{
				tmpVar = matrix[row][column];
				matrix[row][column] = matrix[row][column + 1];
				matrix[row][column + 1] = tmpVar;
			}
		}
	}

	printf("-----after------\n");
	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("%+5d ", matrix[row][column]);
		}
		printf("\n");
	}

	return 0;
}
