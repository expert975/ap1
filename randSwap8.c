#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vector[16];
int tmpVar;
int i;

int main()
{
	srand((unsigned)time(NULL));

	printf("Vector before: \n");
	for(i=0; i<16; i++)
	{
		vector[i] = rand()%100;
		printf("%2d: %3d\n", i, vector[i]);
	}
	for(i=0; i<8; i++)
	{
		tmpVar = vector[i];
		vector[i] = vector[i + 8];
		vector[i + 8] = tmpVar;
	}
	printf("Vector after: \n");
	for(i=0; i<16; i++)
	{
		printf("%2d: %3d\n", i, vector[i]);
	}

	return 0;
}
