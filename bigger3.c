#include <stdio.h>

int main()
{
	int a, b, c = 0;
	int *bigger = 0;
	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);

	printf("Enter third number: ");
	scanf("%d", &c);

	bigger = &a;

	if (b > *bigger)
	{
		bigger = &b;
	} else if (c > *bigger)
	{
		bigger = &c;
	}
	printf("Bigger is: %d\n", *bigger);
	return 0;
}
