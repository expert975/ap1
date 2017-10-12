#include <stdio.h>
#include <stdint.h>

uint8_t expoent;
uint8_t base;
uintmax_t result = 1;

int main() {
	printf("Enter base: ");
	scanf("%hhu", &base);
	printf("Enter expoent: ");
	scanf("%hhu", &expoent);

	if(base <= 0 || expoent <= 0)
	{
		printf("Base and expoent must be positive!\n");
	}
	else
	{
		for (int i = 0; i < expoent; i++)
		{
			result *= base;
		}
		printf("%hhu^%hhu = %ju\n", base, expoent, result);
	}

	return 0;
}
