#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[10], b[10], c[10];

int main()
{
	srand((unsigned)time(NULL));

	for(int i = 0; i < 10; i++)
	{
		a[i] = rand()%100;
		b[i] = rand()%100;
		c[i] = a[i] + b[i];
		printf("%2d: %3d + %3d = %3d\n", i, a[i], b[i], c[i]);
	}

	return 0;
}
