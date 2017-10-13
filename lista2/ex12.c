#include <stdio.h>

int n = 0;

int main() {
	printf("Enter the nth number of the series: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", i*i);
	}

	return 0;
}
