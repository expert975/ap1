#include <stdio.h>

//INCOMPLETE

int main()
{
	int a[5], b[5];
	char o[5];
	double r[5];
	int i;

	for(i=0; i<5; i++)
	{
		printf("Enter A%d: ", i + 1);
		scanf("%d", &a[i]);
		printf("Enter B%d: ", i + 1);
		scanf("%d", &b[i]);
		printf("Enter O%d: ", i + 1);
		scanf("%c", &o[i]);
	}
	for(i=0; i<5; i++)
	{
		switch (o[i])
		{
			case '*':
				printf("asdf");
				break;

		}
	}


	return 0;
}
