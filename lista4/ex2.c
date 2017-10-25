#include <stdio.h>
#include <stdint.h>

int main()
{
	uint8_t wantsToInput = 0;
	uint8_t column_count = 0;
	uint8_t row_count = 0;
	uint8_t multipyingColumn = 0;
	uint8_t multiplyingRow = 0;
	int columnMultiplier = 1;
	int rowMultiplier = 1;

	printf("Enter row count: ");
	scanf("%hhu", &row_count);
	printf("Enter column count: ");
	scanf("%hhu", &column_count);

	int matrix[column_count][row_count];
	int matrixAfterMultColumn[column_count][row_count];
	int matrixAfterMultRow[column_count][row_count];

	printf("Would you like to input all the values? [0-1] ");
	scanf("%hhu", &wantsToInput);

	if (wantsToInput) {
		for (uint8_t row = 0; row < row_count; row++) {
			for (uint8_t column = 0; column < column_count; column++) {
				printf("Enter [%hhu][%hhu]: ", column, row);
				scanf("%d", &matrix[column][row]);
				matrixAfterMultColumn[column][row] = matrix[column][row];
				matrixAfterMultRow[column][row] = matrix[column][row];
			}
		}
	}
	else
	{
		for (uint8_t row = 0; row < row_count; row++) {
			for (uint8_t column = 0; column < column_count; column++) {
				matrix[column][row] = 1;
				matrixAfterMultColumn[column][row] = matrix[column][row];
				matrixAfterMultRow[column][row] = matrix[column][row];
			}
		}
	}

	printf("Enter row to be multiplied: ");
	scanf("%hhu", &multiplyingRow);

	printf("Enter row multiplier: ");
	scanf("%d", &rowMultiplier);

	printf("Enter column to be multiplied: ");
	scanf("%hhu", &multipyingColumn);

	printf("Enter column multiplier: ");
	scanf("%d", &columnMultiplier);

	//row
	for (uint8_t column = 0; column < column_count; column++) {
		matrixAfterMultRow[column][multiplyingRow] = matrix[column][multiplyingRow]*rowMultiplier;
	}

	//column
	for (uint8_t row = 0; row < row_count; row++) {
		matrixAfterMultColumn[multipyingColumn][row] = matrix[multipyingColumn][row]*columnMultiplier;
	}

	printf("-----base--------X%hhu\n", 1);
	for (uint8_t row = 0; row < row_count; row++) {
		for (uint8_t column = 0; column < column_count; column++) {
			// printf("[%hhu][%hhu]\n", column, row);
			printf("%3d ", matrix[column][row]);
		}
		printf("\n");
	}

	printf("-----row---------X%hhu\n", rowMultiplier);
	for (uint8_t row = 0; row < row_count; row++) {
		for (uint8_t column = 0; column < column_count; column++) {
			printf("%3d ", matrixAfterMultRow[column][row]);
		}
		printf("\n");
	}

	printf("----column-------X%hhu\n", columnMultiplier);
	for (uint8_t row = 0; row < row_count; row++) {
		for (uint8_t column = 0; column < column_count; column++) {
			printf("%3d ", matrixAfterMultColumn[column][row]);
		}
		printf("\n");
	}

	return 0;
}
