#include <stdio.h>

int main()
{
	float nfloat;
	int n;
	int even = 0, odd = 0;

	do
	{
		printf("Enter a number: ");
		scanf("%f", &nfloat);

		n = (int)nfloat;

		if(n < 0)
		{
			printf("The number should be positive!. Try again.\n");
		}
		else if(n > 0)
		{
			if(n%2 == 0)
				even++;
			else
				odd++;
		}
	}while(n != 0);

	printf("Even: %d.\n Odd: %d.\n", even, odd);

	return 0;
}
