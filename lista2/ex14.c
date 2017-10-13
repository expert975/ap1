#include <stdio.h>
#include <stdint.h>

//s = s0 + vt
//s - s0 = vt
//dS = vt
//dS/v = t

uint16_t dS = 3000;
uint8_t v = 5;

int main() {
	printf("They will meet in %d seconds\n", dS/v);

	return 0;
}
