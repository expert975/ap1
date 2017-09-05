#include <stdio.h>

int main()
{
	float sum = 0;
	float classAvg = 0;
	float input = 0;
	int count = 0;

	do
	{
		printf("Enter grade: ");
		scanf("%f", &input);

		sum = sum + input;
		count++;
	} while (input > 0 && input < 10);

	classAvg = sum/count;
	printf("Class average: %f\n", classAvg);
}
