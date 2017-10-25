#include <stdio.h>
#include "stdlib.h"
#include "time.h"
#include <stdbool.h>

bool isPrime(int primeCandidate) {
	int divider;

	if (primeCandidate > 0) {
		divider = primeCandidate - 1;

		while (divider > 1) {
			if (primeCandidate%divider == 0 ) {
				break;
			}
			divider--;
		}

		if (divider == 1)
			return true;
	}
	return false;
}

int main()
{
	const unsigned int VEC_LEN = 20;
	int randVec[VEC_LEN];

	srand((unsigned)time(NULL));

	printf("Vector:\n");
	for (size_t i = 0; i < VEC_LEN; i++) {
		randVec[i] = rand() % 1000;
		printf("%d ", randVec[i]);
	}
	printf("\n");

	printf("Primes:\n");
	for (size_t i = 0; i < VEC_LEN; i++) {
		if (isPrime(randVec[i])) {
			printf("%d ", randVec[i]);
		}
	}
	printf("\n");

	return 0;
}
