#include <stdio.h>
#include <time.h>

//INCOMPLETE

int main()
{
	char formatedDate[64];
	time_t rawtime;
	time(&rawtime);
	struct tm *timeinfo = localtime(&rawtime);
	strftime(formatedDate, sizeof(formatedDate), "%c", timeinfo);

	printf("Você está vivo a %s segundos!\n", formatedDate);

	return 0;
}

long long getTimeInSeconds()
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

	return seconds;
}
