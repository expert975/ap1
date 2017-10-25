#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int evenCount = 0;
	int vecSize = 0;

	srand((unsigned)time(NULL));

	printf("Enter size of the vector: ");
	scanf("%d", &vecSize);

	int randVec[vecSize];

	for(int i=0; i<vecSize; i++)
	{
		randVec[i] = rand()%1000;
		if(randVec[i] % 2 == 0)
			{
				evenCount++;
				printf("Number %d is even.\n", randVec[i]);
			}
			else
			{
				printf("Number %d is odd.\n", randVec[i]);
			}
	}

	printf("%d out of %d even numbers.\n", evenCount, vecSize);

	return 0;
}
