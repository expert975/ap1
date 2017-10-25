#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int32_t matrix[3][3];

	for (uint8_t row = 0; row < 3; row++) {
		for (uint8_t column = 0; column < 3; column++) {
			printf("Enter position[%hhu][%hhu]: ", row, column);
			scanf("%d", &matrix[row][column]);
		}
	}

	printf("-----before-----\n");
	for (uint8_t row = 0; row < 3; row++) {
		for (uint8_t column = 0; column < 3; column++) {
			printf("%+4d ", matrix[row][column]);
		}
		printf("\n");
	}

	for (uint8_t row = 0; row < 3; row++) {
		for (uint8_t column = 0; column < 3; column++) {
			matrix[row][column] = abs(matrix[row][column]);
		}
	}

	printf("-----after------\n");
	for (uint8_t row = 0; row < 3; row++) {
		for (uint8_t column = 0; column < 3; column++) {
			printf("%+4d ", matrix[row][column]);
		}
		printf("\n");
	}

	return 0;
}
