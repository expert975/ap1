#include <stdio.h>

int main()
{
	const unsigned int VEC_LEN = 10;
	int vecA[VEC_LEN];
	int vecB[VEC_LEN];
	int vecC[VEC_LEN];

	for (size_t i = 0; i < VEC_LEN; i++) {
		printf("Enter number for position A%zu: ", i);
		scanf("%d", &vecA[i]);
	}

	for (size_t i = 0; i < VEC_LEN; i++) {
		printf("Enter number for position B%zu: ", i);
		scanf("%d", &vecB[i]);
	}

	for (size_t i = 0; i < VEC_LEN; i++) {
		vecC[i] = vecA[i] + vecB[i];
	}

	for (size_t i = 0; i < VEC_LEN; i++) {
		printf("Position C%zu: %d\n", i, vecC[i]);
	}


	return 0;
}
