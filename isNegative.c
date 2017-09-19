#include <stdio.h>

int main()
{
	int n;

	do
	{
		printf("Enter a number: ");
		scanf("%d", &n);

		if(n > 0)
		{
			printf("The number is positive!\n");
		}
		else
		{
			printf("The number is negative!\n");
		}
	} while(n != 0);

	return 0;
}
