#include <stdio.h>
#include <stdint.h>

int main()
{
	const uint8_t MATRIX_COLUMN_COUNT = 4;
	const uint8_t MATRIX_ROW_COUNT = 4;

	int matrix[MATRIX_COLUMN_COUNT][MATRIX_ROW_COUNT];
	int matrixt[MATRIX_ROW_COUNT][MATRIX_COLUMN_COUNT];

	for (uint8_t column = 0; column < MATRIX_COLUMN_COUNT; column++) {
		for (uint8_t row = 0; row < MATRIX_ROW_COUNT; row++) {

			printf("Enter [%hhu][%hhu]: ", column, row);
			scanf("%d", &matrix[column][row]);
		}
	}

	for (uint8_t column = 0; column < MATRIX_COLUMN_COUNT; column++) {
		for (uint8_t row = 0; row < MATRIX_ROW_COUNT; row++) {
			printf("%3d ", matrix[column][row]);
		}
		printf("\n");
	}

	for (uint8_t column = 0; column < MATRIX_COLUMN_COUNT; column++) {
		for (uint8_t row = 0; row < MATRIX_ROW_COUNT; row++) {
			matrixt[row][column] = matrix[column][row];
		}
	}

	printf("--------------\n");
	for (uint8_t column = 0; column < MATRIX_COLUMN_COUNT; column++) {
		for (uint8_t row = 0; row < MATRIX_ROW_COUNT; row++) {
			printf("%3d ", matrixt[column][row]);
		}
		printf("\n");
	}

	return 0;
}
