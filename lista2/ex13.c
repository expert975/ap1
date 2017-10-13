#include <stdio.h>
#include <math.h>

int input = 0;

int main() {
	printf("Enter a number:");
	scanf("%d", &input);

	if(sqrt(input) == floor(sqrt(input)))
		printf("It's part of the sequence\n");
	else
		printf("It's not part of the sequence\n");

	return 0;
}
