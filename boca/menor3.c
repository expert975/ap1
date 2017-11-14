#include <stdio.h>
#include <limits.h>

int n[3];
int groupCount = 0, i;
int zeroCount = 0, input = 0;

int getSmaller(int n[])
{
		int smaller = INT_MAX;

		for(i=0; i<3; i++)
		{
			if(n[i] < smaller)
			{
				smaller = n[i];
			}

		}

		return smaller;
}


int main()
{

	int smaller[120];

	while(1)
	{
		scanf("%d", &n[0]);
		scanf("%d", &n[1]);
		scanf("%d", &n[2]);


		if(!(n[0] == 0 && n[2] == 0 && n[2] == 0))
			smaller[groupCount++] = getSmaller(n);
		else
			break;
	}



	for(i=0; i<groupCount; i++)
	{
		printf("%d\n", smaller[i]);
	}


	return 0;
}
