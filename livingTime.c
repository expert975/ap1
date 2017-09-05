#include <stdio.h>

long getTimeInSeconds(long year, long month, long day, long hour, long minute);

int main()
{
	long year0, month0, day0, hour0, minute0, seconds0 = 0;
	long year1, month1, day1, hour1, minute1, seconds1 = 0;
	long timeAlive = 0;



	printf("Entre seu ano de nascimento: ");
	scanf("%ld", &year0);

	printf("Entre seu mes de nascimento: ");
	scanf("%ld", &month0);

	printf("Entre seu dia de nascimento: ");
	scanf("%ld", &day0);

	printf("Entre seu hora de nascimento: ");
	scanf("%ld", &hour0);

	printf("Entre seu minuto de nascimento: ");
	scanf("%ld", &minute0);


	printf("Entre o ano atual: ");
	scanf("%ld", &year1);

	printf("Entre o mes autal: ");
	scanf("%ld", &month1);

	printf("Entre o dia atual: ");
	scanf("%ld", &day1);

	printf("Entre a hora atual: ");
	scanf("%ld", &hour1);

	printf("Entre o minuto atual: ");
	scanf("%ld", &minute1);

	seconds0 = getTimeInSeconds(year0, month0, day0, hour0, minute0);
	seconds1 = getTimeInSeconds(year1, month1, day1, hour1, minute1);
	timeAlive = seconds1 - seconds0;

	if (timeAlive < 0)
	{
		printf("Você ainda não nasceu!");
	}
	else
	{
		printf("Você está vivo a %ld segundos!\n", timeAlive);
	}

	return 0;
}

long getTimeInSeconds(long year, long month, long day, long hour, long minute)
{
	return ((((year*12 + month)*30 + day)*24 + hour)*60 + minute)*60;
}
