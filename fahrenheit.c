#include <stdio.h>

int main()
{
	float gCentigrade = 0;
	float gFahrenheit = 50;

	while(gFahrenheit <= 70)
	{
		gCentigrade = .555555555555555555555555555555555555*(gFahrenheit - 32);
		printf("Centigrade: %02.3f Fahrenheit: %02.1f\n", gCentigrade, gFahrenheit);
		gFahrenheit += 0.5;
	}
}
