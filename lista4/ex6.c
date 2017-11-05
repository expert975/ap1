#include <stdio.h>
#include <stdint.h>


int main()
{
	uint8_t size = 0;
	int32_t sumPrincipal = 0;
	int32_t sumSecondary = 0;

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

	printf("Primary diagonal:\n");
	for (uint8_t row = 0; row < size; row++) {
		for (uint8_t column = 0; column < size; column++) {
			if (row == column )
			{
				printf("%d\n", matrix[row][column]);
				sumPrincipal += matrix[row][column];
			}
		}
	}

	printf("Secondary diagonal:\n");
	for (uint8_t row = 0; row < size; row++) {
		for (uint8_t column = 0; column < size; column++) {
			if (row + column == size - 1)
			{
				printf("%d\n", matrix[row][column]);
				sumSecondary += matrix[row][column];
			}
		}
	}

	printf("Principal: %d\nSecondary: %d\n", sumPrincipal, sumSecondary);

	return 0;
}
