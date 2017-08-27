#include<stdio.h>

int main()
{
//	int totalMoney;
	int remainingMoney;
	int m10, m5, m1 = 0;

	printf("Enter money: ");
	scanf("%d", &remainingMoney);

	m10 = remainingMoney / 10;
	remainingMoney -= m10*10;
	printf("10: %d\n", m10);

	m5 = remainingMoney / 3;
	remainingMoney -= m5*3;

	printf("5: %d\n", m5);

	printf("1: %d\n", remainingMoney);

	return 0;
}
