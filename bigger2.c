#include <stdio.h>

int main()
{
	int a, b = 0;
	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);

	if (a > b)
	{
		printf("Bigger is: %d\n", a);
	} else
	{
		printf("Bigger is: %d\n", b);
	}
	return 0;
}
