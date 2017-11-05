#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define SIZE 20 //macros FTW

int main()
{
	int32_t matrix[SIZE][SIZE];
	int32_t numberToLookFor = 0;
	uint8_t rowOfNumber = 0;
	uint8_t columnOfNumber = 0;
	bool foundNumber = false;

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

	printf("Enter the number to look for: ");
	scanf("%d", &numberToLookFor);

	for (uint8_t row = 0; row < SIZE; row++) {
		for (uint8_t column = 0; column < SIZE; column++) {
			if (matrix[row][column] == numberToLookFor)
			{
				numberToLookFor = matrix[row][column];
				rowOfNumber = row;
				columnOfNumber = column;
				foundNumber = true;
				printf("Number %d found at [%hhu][%hhu]\n", numberToLookFor, rowOfNumber, columnOfNumber);
			}
		}
	}

	if (!foundNumber)
		printf("Number %d was not found\n", numberToLookFor);

	return 0;
}
