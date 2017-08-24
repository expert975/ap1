#include <stdio.h>

int main()
{
	float fatura = 0;
	int opcao = 0;

	printf("Entre com a fatura: ");
	scanf("%f", &fatura);

	printf("Entre com a opcao: ");
	scanf("%d", &opcao);

	switch(opcao)
	{
		case 0:
			fatura *= .85;
			break;
		case 1:
			fatura *= .9;
			break;
		case 2:
//			fatura *= 1;
			break;
		case 3:
			fatura *= 1.05;
			break;
	}

	if(opcao == 0)
	{
		printf("0\n");
	} else if (opcao == 1)
	{
		printf("1\n");
	} else if (opcao == 2)
	{
		printf("2\n");
	} else if (opcao == 3)
	{
		printf("3\n");
	}

	printf("Fatura: %f\n", fatura);

	return 0;
}
