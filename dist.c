#include <stdio.h>
#include <math.h>

int main()
{
	double x0, y0, x1, y1, dist = 0;

	printf("Enter x0: ");
	scanf("%lf", &x0);

	printf("Enter x1: ");
	scanf("%lf", &x1);

	printf("Enter y0: ");
	scanf("%lf", &y0);

	printf("Enter y1: ");
	scanf("%lf", &y1);

	dist = sqrt(pow((x0 - y0), 2) + pow((x1 - y1), 2));

	printf("Euclidean distance: %f\n", dist);

	return 0;
}
