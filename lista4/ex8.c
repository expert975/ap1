#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int main()
{
	int8_t column = 0;
	int8_t row = 0;
	int32_t matrix[10][10];

	srand((unsigned)time(NULL));

	for (size_t i = 0; i < 10; i++) {
		for (size_t j = 0; j < 10; j++) {
			matrix[i][j] = rand() % 1000;
		}
	}

	do {
		printf("Enter column: ");
		scanf("%hhd", &column);

		printf("Enter row: ");
		scanf("%hhd", &row);

		if (column < 10 && row < 10 && column >= 0 && row >= 0) {
			printf("[%hhd][%hhd]: %d\n", column, row, matrix[column][row]);
		}
	} while(column >= 0 && row >= 0);

	return 0;
}
