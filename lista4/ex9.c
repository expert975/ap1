#include <stdio.h>
#include <stdint.h>


int main()
{
	uint8_t size = 0;
	int32_t bigger = INT32_MIN;
	uint8_t rowOfBigger = 0;
	uint8_t columnOfBigger = 0;

	printf("Enter the dimension of the matrix: ");
	scanf("%hhu", &size);

	int32_t matrix[size][size];

	for (uint8_t row = 0; row < size; row++) {
		for (uint8_t column = 0; column < size; column++) {
			printf("Enter position [%hhu][%hhu]: ", row, column);
			scanf("%d", &matrix[row][column]);
		}
	}

	printf("-----input-----\n");
	for (uint8_t row = 0; row < size; row++) {
		for (uint8_t column = 0; column < size; column++) {
			printf("%+5d ", matrix[row][column]);
		}
		printf("\n");
	}

	for (uint8_t row = 0; row < size; row++) {
		for (uint8_t column = 0; column < size; column++) {
			if (matrix[row][column] > bigger)
			{
				bigger = matrix[row][column];
				rowOfBigger = row;
				columnOfBigger = column;
			}
		}
	}

	printf("Bigger is at [%hhu][%hhu]: %d\n", rowOfBigger, columnOfBigger, bigger);

	return 0;
}
