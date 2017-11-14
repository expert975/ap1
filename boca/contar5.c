#include <stdio.h>

int main()
{
	int i, num = 0;
	scanf("%d", &num);

	for(i=0; i<5; i++)
		printf("%d", num++);

	printf("\n");


	return 0;
}
