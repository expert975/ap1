#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i,j;
int vector[10];
int tmpVar;
int diff, n;

int main()
{
	srand((unsigned)time(NULL));
	printf("Table before sorting: \n");
	for(i=0; i<10; i++)
	{
		do
		{
			diff = 1;
			n = rand()%50;
			for (j=0; j<i; j++)
			{
				if (n == vector[j])
				{
					diff = 0;
				}
			}
		} while (diff == 0);
		vector[i]=n;
		printf("%2d\n", vector[i]);

	}



	for(j=0; j<10; j++)
	{
		for(i=j+1; i<10; i++)
		{
			if(vector[j] > vector[i])
			{
				tmpVar = vector[j];
				vector[j] = vector[i];
				vector[i] = tmpVar;
				printf("Swap positions: %d,%d. Values: %2d > %2d\n", i, j, vector[i], vector[j]);
			}
		}
	}

	printf("Table after sorting: \n");
	for(i=0; i<10; i++)
	{
		printf("%d: %2d\n", i, vector[i]);
	}



	return 0;
}
