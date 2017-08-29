#include <stdio.h>

int main()
{
	int a, b, c, isTriangle = 0;

	printf("Enter A side: ");
	scanf("%d", &a);

	printf("Enter B side: ");
	scanf("%d", &b);

	printf("Enter C side: ");
	scanf("%d", &c);

	if (((a + b) < c) || ((a + c) < b) || ((b + c) < a))
		printf("It can't be a triangle.\n");
	else
		printf("It could maybe be a triangle.\n");

	return 0;
}
