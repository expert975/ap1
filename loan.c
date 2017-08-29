#include<stdio.h>

int main()
{
	float loanParcel, salary, percentOfSalary = 0;

	printf("Enter you montly parcel: ");
	scanf("%f", &loanParcel);

	printf("Enter your salary: ");
	scanf("%f", &salary);

	if (loanParcel <= salary*.2)
		printf("Good luck paying that.\n");
	else
		printf("No loan for you!\n");

	return 0;
}
