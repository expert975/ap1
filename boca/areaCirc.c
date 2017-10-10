#include <stdio.h>

#define PI 3.1415926

float radius = 0;

int main()
{
	scanf("%f", &radius);

	printf("AREA = %.3f\n", PI*radius*radius);

	return 0;
}
