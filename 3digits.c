#include<stdio.h>

int main()
{
	int number = 0, hundreds = 0, tens = 0, ones = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	hundreds = number/100;
	tens = (number - hundreds*100)/10;
	ones = number - hundreds*100 - tens*10;

	printf("Hundreds: %d, tens: %d, ones: %d.\n", hundreds, tens, ones);
	printf("Number backwards: %d%d%d\n", ones, tens, hundreds);

	return 0;
}
