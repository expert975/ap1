#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//s = s0 + vt
//s - s0 = vt
//dS = vt
//dS/v = t

double sJ = 0;
double sM = 0;
double dS = 0;
double v = 5;

int main() {
	printf("Enter Joao's position: ");
	scanf("%lf", &sJ);

	printf("Enter Maria's position: ");
	scanf("%lf", &sM);

	dS = abs(sJ - sM);

	printf("They will meet in %lf seconds\n", dS/v);

	return 0;
}
