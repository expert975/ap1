#include <stdio.h>
#include <stdbool.h>

int main()
{
	int birthYear = 0;
	int age = 0;
	bool error = true;

	while(error)
	{
		printf("Enter your birthyear: ");
		scanf("%d", &birthYear);

		if (birthYear <= 2017 && birthYear > 0)
			error = false;
	}

	age = 2007 - birthYear;

	if (age >= 0)
		printf("Your age at 2007 was: %d\n", age);
	else
		printf("You were not born at 2007\n");

	return 0;
}
