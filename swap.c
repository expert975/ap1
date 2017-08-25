#include <stdio.h>

int main()
{
	int a, b, c; //reserve memory

	printf("Digite A:");
	scanf("%d", &a);
	printf("Digite B:");
	scanf("%d", &b);

	printf("A = %d, B = %d\n", a, b);

	c = a;
	a = b;
	b = c;

	printf("A = %d, B = %d\n", a, b);

	return 0;
}
