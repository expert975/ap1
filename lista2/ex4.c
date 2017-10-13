#include <stdio.h>
#include <stdint.h>

uint32_t x = 0, y = 0;

int main()
{
		printf("Enter X: ");
		scanf("%u", &x);
		printf("Enter Y: ");
		scanf("%u", &y);
		for (uint32_t i = x; i <= y; i++)
		{
			if(i%2 == 0)
				printf("%u\n", i);
		}
	return 0;
}
