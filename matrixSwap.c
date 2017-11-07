#include <stdio.h>
#include <stdint.h>

#define SIZE 5

int main() {
	int32_t matrix[SIZE][SIZE];
	int32_t swapVar;

	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("Enter number for position[%hhu][%hhu]: ", row, column);
			scanf("%d", &matrix[row][column]);
		}
	}

	printf("----before----\n");
	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("%5d", matrix[row][column]);
		}
		printf("\n");
	}

	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			if (row == column)
			{
				swapVar = matrix[row][column];
				matrix[row][column] = matrix[row][SIZE - 1 - column];
				matrix[row][SIZE - 1 - column] = swapVar;
			}
		}
	}

	printf("----after-----\n");
	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			printf("%5d", matrix[row][column]);
		}
		printf("\n");
	}

	return 0;
}
