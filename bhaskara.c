#include <stdio.h>
#include <stdint.h>
#include <math.h>

//wrong results!

typedef struct
{
	double a;
	double b;
	double c;
}Equation2;

int main()
{
	Equation2 eq;
	double delta = 0;

	printf("Enter a: ");
	scanf("%lf", &eq.a);

	printf("Enter b: ");
	scanf("%lf", &eq.b);

	printf("Enter c: ");
	scanf("%lf", &eq.c);

	delta = pow(eq.b, 2) - 4*eq.a*eq.b;

	if(delta < 0)
		printf("No real roots!\n");
	else if(delta == 0)
		printf("Result: %f\n", -eq.b/2*eq.a);
	else
	{
		printf("Result 1: %f\n", (-eq.b + delta)/2*eq.a);
		printf("Result 2: %f\n", (-eq.b - delta)/2*eq.a);
	}


	return 0;
}
