#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *arg[])
{
	float sum = 0;
	for (int i=0; i < argc; i++)
	{
		if (i > 0)
		{
			sum += atof(arg[i]);
		}
	}
	printf("Sum: %f\n", sum);
	return 0;
}
