#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <float.h>
#include <math.h>

int main()
{
	float matrix[4][4];
	float divisors[4];

	for (size_t row = 0; row < 4; row++) {
		divisors[row] = -FLT_MAX;
	}

	for (uint8_t row = 0; row < 4; row++) {
		for (uint8_t column = 0; column < 4; column++) {
			printf("Enter position[%hhu][%hhu]: ", row, column);
			scanf("%f", &matrix[row][column]);
		}
	}

	for (uint8_t row = 0; row < 4; row++) {
		for (uint8_t column = 0; column < 4; column++) {
			if (matrix[row][column] > divisors[row])
				divisors[row] = matrix[row][column];
		}
	}

	printf("-----before-----\n");
	for (uint8_t row = 0; row < 4; row++) {
		for (uint8_t column = 0; column < 4; column++) {
			printf("%+5.2f ", matrix[row][column]);
		}
		printf(" / %.2f \n", fabsf(divisors[row]));
	}

	for (uint8_t row = 0; row < 4; row++) {
		for (uint8_t column = 0; column < 4; column++) {
			matrix[row][column] = matrix[row][column]/fabsf(divisors[row]);
		}
	}


	printf("-----after------\n");
	for (uint8_t row = 0; row < 4; row++) {
		for (uint8_t column = 0; column < 4; column++) {
			printf("%+5.2f ", matrix[row][column]);
		}
		printf("\n");
	}

	return 0;
}
