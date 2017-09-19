#include <stdio.h>

int main()
{
	int i;
	float vector1[10];

	for(i=0; i<10; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%f", &vector1[i]);
	}
	for(i=9; i >= 0; i--)
	{
		printf("%f\n", vector1[i]);
	}
	return 0;
}
