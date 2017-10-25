#include <stdio.h>

int main()
{
	float grade[7];
	float gradeSum = 0;
	float classGradeAvg = 0;

	for(int i=0; i<7; i++)
	{
		printf("Enter grade number %d: ", i + 1);
		scanf("%f", &grade[i]);
		gradeSum += grade[i];
	}

	classGradeAvg = gradeSum/7;
	printf("Class average is: %.2f\n", classGradeAvg);
	for(int i=0; i<7; i++)
	{
		if(grade[i] > classGradeAvg)
		{
			printf("Grade number %d is above average: %.2f\n", i + 1, grade[i]);
		}
	}

	return 0;
}
