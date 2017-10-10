#include <stdio.h>

float a = 0,  b = 0; 

int main()
{
	while(1)
	{
		scanf("%f%f", &a, &b);
		if(a == b && a == 0)
			break;
		else
			printf("%.0f\n", a+b);
	}

	return 0;
}
