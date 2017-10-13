#include <stdio.h>
#include <stdint.h>
#include <math.h>

uintmax_t countDigits(uintmax_t number)
{
	uintmax_t i = 0;
	do {
		number -= number%(uintmax_t)pow(10, i + 1);
		i++;
	} while(number > 0);
	return i;
}

int main()
{
	uintmax_t number = 0;
	uintmax_t invertedNumber = 0;
	uintmax_t digitCount = 0;

	printf("Enter a really lage number: ");
	scanf("%ju", &number);
	digitCount = countDigits(number);

	for (uintmax_t i = 0; i <= digitCount; i++)
		invertedNumber += (number%(uintmax_t)pow(10, i + 1) - number%(uintmax_t)pow(10, i))/(uintmax_t)pow(10, i)*(uintmax_t)pow(10, digitCount - i - 1);
		//http://i.imgur.com/sWKwve5.gif

	printf("Inverted number: %ju\n", invertedNumber);

	return 0;
}
