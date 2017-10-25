#include <stdio.h>

int main()
{
	const int VEC_LEN = 10;
	int numVec[VEC_LEN];

	for(int i=0; i<VEC_LEN; i++)
	{
		printf("Enter a number %d: ", i + 1);
		scanf("%d", &numVec[i]);
	}

	for(int i=1; i<VEC_LEN; i++)
	{
		if(numVec[i] < numVec[i - 1])
		{
			printf("Not in ascending order\n");
			return 1;
		}
	}
	printf("In ascending order\n");

	return 0;
}
