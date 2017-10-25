#include <stdio.h>

int main()
{
	const unsigned int VEC_LEN = 10;
	int vecA[VEC_LEN];
	int vecB[VEC_LEN];

	for (size_t i = 0; i < VEC_LEN; i++) {
		printf("Enter number for position A%zu: ", i);
		scanf("%d", &vecA[i]);
	}

	for (size_t i = 0; i < VEC_LEN; i++) {
		vecB[VEC_LEN - i - 1] = vecA[i];
	}

	printf("A: ");
	for (size_t i = 0; i < VEC_LEN; i++) {
		printf("%d ", vecA[i]);
	}
	printf("\n");

	printf("B: ");
	for (size_t i = 0; i < VEC_LEN; i++) {
		printf("%d ", vecB[i]);
	}
	printf("\n");

	return 0;
}
