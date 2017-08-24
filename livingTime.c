#include <stdio.h>
#include <time.h>

int main()
{
	SYSTEMTIME time;
}

long calculateSecondsAlive()
{
	long year, month, day, hour, minute, seconds = 0;

	printf("Entre seu ano de nascimento: ");
	scanf("%d", &year);

	printf("Entre seu mes de nascimento: ");
	scanf("%d", &month);

	printf("Entre seu dia de nascimento: ");
	scanf("%d", &day);

	printf("Entre seu hora de nascimento: ");
	scanf("%d", &hour);

	printf("Entre seu minuto de nascimento: ");
	scanf("%d", &minute);

	seconds = ((((year*12 + month)*30 + day)*24 + hour)*60 + minute)*60;
	printf("Você está vivo a %d segundos!\n", seconds);

	return seconds;
}
