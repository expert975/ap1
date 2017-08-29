#include <stdio.h>

int main()
{
	int startHour, startMinute, endHour, endMinute, durationHour, durationMinute = 0;

	printf("Enter start hour and minute: ");
	scanf("%d%d", &startHour, &startMinute);

//	printf("Enter start minute: ");
//	scanf("%d", &startMinute);

	printf("Enter end hour: ");
	scanf("%d", &endHour);

	printf("Enter end minute: ");
	scanf("%d", &endMinute);


	if (startHour < endHour)
	{
		durationHour = endHour - startHour;
		if (startMinute < endMinute)
		{
			durationMinute = endMinute - startMinute;
		}
		else if (startMinute > endMinute)
		{
			durationHour--;
			durationMinute = (60 + endMinute) - startMinute;
		}
		else
		{
			durationMinute = 0;
		}
	}
	else if (startHour > endHour)
	{
		if (startMinute < endMinute)
		{
			
		}

		if (startMinute > endMinute)
		{

		}
		else
		{

		}
	}
	else
	{
		if (startMinute < endMinute)
		{

		}

		if (startMinute > endMinute)
		{

		}
		else
		{

		}
	}

	printf("The game lasted %d hours and %d minutes.\n", durationHour, durationMinute);

	return 0;
}
