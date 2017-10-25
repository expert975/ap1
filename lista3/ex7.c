#include <stdio.h>
#include <float.h>

int main()
{
	float vec[10];
	float bigger = -FLT_MAX;
	float smaller = FLT_MAX;

	for (size_t i = 0; i < 10; i++) {
		printf("Enter number %zu: ", i);
		scanf("%f", &vec[i]);
	}

	for (size_t i = 0; i < 10; i++) {
		if (vec[i] > bigger)
		{
			bigger = vec[i];
		}
		if(vec[i] < smaller)
		{
			smaller = vec[i];
		}
	}


	printf("Bigger: %.2f. Smaller: %.2f\n", bigger, smaller);
	return 0;
}
