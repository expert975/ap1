#include <stdio.h>

int main()
{
	char civilStatus = 0;
	char dataToEnter = 0;


	do
	{
		printf("Enter data(s/n)?\n");
		scanf("%c", &dataToEnter);

	} while(!(dataToEnter == 'n'));

//	printf()

	return 0;
}
