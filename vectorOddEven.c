#include <stdio.h>

int main()
{
	int vector[10];
	int i;

	for(i=0; i<10; i++)
	{
		if(i%2 == 0)
		{
			vector[i] = 0;
		}
		else
		{
			vector[i] = 1;
		}
		printf("%d: %d\n", i, vector[i]);
	}

	return 0;
}
