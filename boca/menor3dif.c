#include <stdio.h>

int a = 0, b = 0, c = 0;
int menor = 0;

int main()
{

	scanf("%d%d%d", &a, &b, &c);

	if(a <= b && a <= c)
		menor = a;
	else if(b <= a && b <= c)
		menor = b;
	else
		menor = c;


	printf("%d\n", menor);
	return 0;
}
