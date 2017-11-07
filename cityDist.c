#include <stdio.h>
#include <stdint.h>

int main()
{
	uint8_t distances[6][6] =
	{
		{ -1,  63, 210, 190, -1, 190},
		{ 63,  -1, 160, 150, 95,  -1},
		{210, 160,  -1,  10, -1,  -1},
		{190, 150,  10,  -1, -1,  -1},
		{ -1,  95,  -1,  -1, -1,  80},
		{190,  -1,  -1,  -1, 80,  -1},
	};
	uint8_t route[] = {2, 3, 1, 4, 5, 0};

	uint8_t currentCity = route[0];
	uint16_t totalDistance = 0;

	for (uint8_t nextStop = 1; nextStop < 6; nextStop++) {
		totalDistance += distances[currentCity][route[nextStop]];
		currentCity = route[nextStop];
	}

	printf("Total distance: %d\n", totalDistance);

	return 0;
}
