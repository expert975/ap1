#include <stdio.h>

int main()
{
	int A,B;

	printf("Entre com o valor de A: ");
	scanf("%d", &A);

	printf("Entre com o valor de B: ");
	scanf("%d", &B);

	printf("A - B = %d\n", A - B);
	printf("B - A = %d\n", B - A);
	printf("B*A = %d\n", A * B);
	printf("A/B = %d\n", A / B);
	printf("B%%A = %d\n", A % B);
	return 0;
}
