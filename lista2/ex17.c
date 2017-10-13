#include <stdio.h>
#include <stdlib.h>

double balance = 0;

void displayOptions()
{
	printf("\n[%c] to see your balance.\n", 'a');
	printf("[%c] to withdraw.\n", 'b');
	printf("[%c] to deposit.\n", 'c');
	printf("[%c] to quit.\n", 'd');
}

void showBalance()
{
	printf("Your balance: R$%.2lf\n", balance);
}

double askAmount()
{
	double amount = 0;
	printf("Enter amount: ");
	scanf("%lf%*c", &amount);
	return amount;
}

void withdraw()
{
	double amount = askAmount();
	balance -= amount;
}

void deposit()
{
	double amount = askAmount();
	balance += amount;
}

void askAction()
{
	char option = '\0';

	displayOptions();
	printf("Option: ");
	scanf("%c%*c", &option);
	switch(option)
	{
		case 'a':
			showBalance();
			break;

		case 'b':
			withdraw();
			break;

		case 'c':
			deposit();
			break;

		case 'd':
			printf("Exiting...\n");
			exit(0);
			break;

		default:
			printf("Entered invalid option %c\n", option);
			break;
	}
}


int main() {
	while(1){
		askAction();
	}

	return 0;
}
