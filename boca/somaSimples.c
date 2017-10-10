#include <stdio.h>

int sum = 0;
int input = 0;
int i;

int main()
{
	for(i=0; i<3; i++)
	{
		scanf("%d", &input);
		sum += input;
	}
	printf("%d\n", sum);

	return 0;
}
