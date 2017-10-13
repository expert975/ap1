#include <stdio.h>
#include <stdint.h>

uint32_t n1 = 0, n2 = 1;
uint32_t out = 0;

int main() {

	for (size_t i = 0; i < 20; i++) {
		printf("%2zu: %d\n", i + 1, out);
		out = n1 + n2;
		n2 = n1;
		n1 = out;
	}

	return 0;
}
