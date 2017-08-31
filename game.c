#include <stdio.h>

int main()
{
	int startHour, startMinute, endHour, endMinute, durationHour, durationMinute = 0;

	printf("Enter start hour: ");
	scanf("%d", &startHour);

	printf("Enter start minute: ");
	scanf("%d", &startMinute);

	printf("Enter end hour: ");
	scanf("%d", &endHour);

	printf("Enter end minute: ");
	scanf("%d", &endMinute);

	if (startHour > 23 || endHour > 23 || startMinute > 59 || endMinute > 59)
	{
		printf("That's not right, enter the right time!\n");
		main();
	}

	if (startHour < endHour)
	{
		durationHour = endHour - startHour;
	}
	else if (startHour > endHour)
	{
		durationHour = 24 - startHour + endHour;
	}
	else
	{
		durationHour= 0;
	}

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

	if (durationHour == -1)
		durationHour = 23;

	printf("The game lasted %d hours and %d minutes.\n", durationHour, durationMinute);
	if (!durationHour && !durationMinute)
		printf("...or 24 hours\n");

	main();

	return 0;
}
