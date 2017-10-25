#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char getRandChar()
{
	return "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
}

int main()
{
	const int CHAR_COUNT = 50;
	const int VOGAL_COUNT = 5;
	const char VOGALS[] = "aeiou";
	char randChar[CHAR_COUNT];

	srand((unsigned)time(NULL));

	printf("Chars: ");
	for(int i=0; i<CHAR_COUNT; i++)
	{
		randChar[i] = getRandChar();
		printf("%c", randChar[i]);
	}
	printf("\nVogal: ");

	for(int i=0; i<CHAR_COUNT; i++)
	{
		for(int j=0; j<VOGAL_COUNT; j++)
		{
			if(randChar[i] == VOGALS[j])
			{
				printf("%c", randChar[i]);
			}
		}
	}
	printf("\n");

	return 0;
}
