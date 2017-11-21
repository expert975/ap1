#include <stdio.h>
#include <stdint.h>

#define PERSON_COUNT  10

typedef struct
{
	char first[40];
	char last[40];
} Name;

typedef struct
{
	int year;
	int month;
	int day;
} BornDate;

typedef struct
{
	Name name;
	BornDate bornDate;
	float height;
} Person;

int main()
{
	Person people[PERSON_COUNT];

	for(uint8_t i=0; i<PERSON_COUNT; i++)
	{
		printf("Enter first name for person %hhu: ", i);
		scanf("%s", people[i].name.first);

		printf("Enter last name for person %hhu: ", i);
		scanf("%s", people[i].name.last);

		printf("Enter born day for person %hhu: ", i);
		scanf("%d", &people[i].bornDate.day);

		printf("Enter born month for person %hhu: ", i);
		scanf("%d", &people[i].bornDate.month);

		printf("Enter born year for person %hhu: ", i);
		scanf("%d", &people[i].bornDate.year);

		printf("Enter height for person %hhu: ", i);
		scanf("%f", &people[i].height);

	}


	for(uint8_t i=0; i<PERSON_COUNT; i++)
	{
		printf("Person %hhu: \nName: %s %s\n", i, people[i].name.first, people[i].name.last);
		printf("Born date: %d/%d/%d\n", people[i].bornDate.day, people[i].bornDate.month, people[i].bornDate.year);
		printf("Height: %.2f\n", people[i].height);

	}
	return 0;
}
