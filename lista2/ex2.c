#include <stdio.h>
#include <stdint.h>

uintmax_t factorial = 1;
int8_t factorialOf = 0;

int main()
{
	printf("Maximum possible output is %zu bytes long\n", sizeof(uintmax_t));
	printf("Enter a nmber: ");
	scanf("%hhd", &factorialOf);

	if(factorialOf < 0)
	{
		printf("Number must not be negative!\n");
	}
	else
	{
		for (uint8_t mult = factorialOf; mult > 1; mult--) {
			factorial *= mult;
		}
		printf("Factorial of %hhd is %ju.\n", factorialOf, factorial);
	}

	return 0;
}
