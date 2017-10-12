#include <stdio.h>

int n;

int main() {
	printf("Enter the nth number of the series: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", n*n);
	}

	return 0;
}
