#include <stdio.h>
#include <stdbool.h>

int main()
{
	const char VOGALS[] = "aeiou";
	char word[40];
	bool diphFound = false;

	printf("Enter a string: ");
	scanf("%s", word);
	printf("String: %s\n", word);

	for (size_t i = 0; i < 40; i++) {
		for (size_t j = 0; j < 5; j++) {
			if (word[i] == VOGALS[j]) {
				for (size_t k = 0; k < 5; k++) {
					if (word[i + 1] == VOGALS[k]) {
						diphFound = true;
					}
				}

			}
			if (diphFound) {
				break;
			}
		}
		if (diphFound) {
			break;
		}
	}

	if (diphFound) {
		printf("SIM\n");
	}

	return 0;
}
