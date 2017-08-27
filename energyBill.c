#include <stdio.h>

int main()
{
	float kwhPrice, kwh = 0;

	printf("Enter kilowatt hour price: ");
	scanf("%f", &kwhPrice);

	printf("Enter kilowatt hour: ");
	scanf("%f", &kwh);

	printf("Your bill is :%f\n", kwhPrice * kwh * .9);

	return 0;
}
