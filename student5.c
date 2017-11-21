#include <stdio.h>
#include <stdint.h>
#include <float.h>
#include <stdlib.h>

typedef struct
{
	char name[40];
	float grade;

} Student;

int main()
{
	Student student[5];
	float sum = 0;
	float greaterGrade = -FLT_MAX;
	Student *winner = NULL;

	for(uint8_t i=0; i<5; i++)
	{
		printf("Enter name for student %hhu: ", i);
		scanf("%s", student[i].name);

		printf("Enter grade for student %hhu: ", i);
		scanf("%f", &student[i].grade);
	}

	for(uint8_t i=0; i<5; i++)
	{
		sum += student[i].grade;
	}

	printf("Grade average: %.2f\n", sum/5);


	for(uint8_t i=0; i<5; i++)
	{
		if(student[i].grade > greaterGrade)
		{
			winner = &student[i];
			greaterGrade = winner->grade;
		}

	}

	printf("Winner is %s with %.2f\n", winner->name, winner->grade);

	return 0;
}
