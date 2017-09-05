#include <stdio.h>
#include <math.h>

int main()
{
	float x = 1;
	float y = 1;
	float sum = 0;
	int operation = 0;

	while((x/y) > 0.01)
	{
		if (operation)
		{
			sum = sum + x/y;
		}
		else
		{
			sum = sum - x/y;
		}
		operation = !operation;

		printf("%03.f/%03.f = %f\n", x, y, sum);
		x++;
		y = powf(x,2);
	}
	return 0;
}
