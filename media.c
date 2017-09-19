#include <stdio.h>
#include <stdlib.h>


int main()
{
	float p1, p2, p3, mt, mediaFinal = 0;
	malloc(100);

	printf("Entre com a nota p1: ");
	scanf("%f", &p1);
	printf("Entre com a nota p2: ");
	scanf("%f", &p2);
	printf("Entre com a nota p3: ");
	scanf("%f", &p3);
	printf("Entre com a nota media dos trabalhos: ");
	scanf("%f", &mt);

	mediaFinal = (2*p1 + 3*p2 + 4*p3 + mt)/10;

	if (mediaFinal >= 6)
	{
		printf("Apovado! Nota final: %f\n", mediaFinal);
	} else
	{
		printf("Reprovado! Ate a proxima. Media final %f\n", mediaFinal);
	}
	return 0;
}
