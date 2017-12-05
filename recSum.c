#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>


uintmax_t recSum(int n)
{
	if(n == 1 || n == 0)
		return(1);
	else
		return recSum(n-1)+n;
}

int main()
{
	printf("%ju\n", recSum(10));
	return 0;
}
