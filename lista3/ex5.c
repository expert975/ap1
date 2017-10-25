#include "stdio.h"

int main() {
	int vec[10];

	for (size_t i = 0; i < 10; i++) {
		printf("Enter number %zu: ", i);
		scanf("%d", &vec[i]);
	}

	for (size_t i = 0; i < 9; i++) {
		for (size_t j = i + 1; j < 10; j++) {
			if (vec[i] == vec[j]) {
				printf("[%zu] == [%zu]: %d\n", i, j, vec[i]);
			}
		}
	}

	return 0;
}
