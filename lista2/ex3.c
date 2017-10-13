#include <stdio.h>
#include <stdint.h>

int main()
{
		for (uint8_t i = 100; i > 0; i--)
		{
			if(i%2 == 0)
				printf("%hhu\n", i);
		}
	return 0;
}
