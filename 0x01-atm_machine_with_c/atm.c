#include <stdio.h>

int main()
{
int balance = 0;
int pin = 1234;
int punchPin;
int anotherTransaction = 1; //do another transaction, 2 no, not another action

printf("To gain access to our banking services follow the prompt below.\n");
printf("Please enter your pin: ");
scanf("%d", &punchPin);
if (pin == punchPin)
{
printf("Welcome to your dashboard\n");
}
else
{
printf("Invalid Pin");
return(0);
}

while (anotherTransaction == 1)
{
int option;

printf("What banking task would you like to initiate?: \n");
printf("Press 1 - Check your Balance.\n");
printf("Press 2 - Deposits.\n");
printf("Press 3 - Withdrawals.\n");
scanf("%d", &option);

if (option == 1)
{
printf("Your account balance is #%d\n", balance);
}
else if (option == 2)
{
int amountDeposit;
printf("Please enter the amount of money to deposit: #");
scanf("%d", &amountDeposit);
if (amountDeposit > 0)
{
balance += amountDeposit;
printf("Deposit of #%d is successful.\n", amountDeposit);
printf("Your new account balance is #%d\n", balance);
}
else
{
printf("Invalid deposit amount\n");
}
}

else if (option == 3)
{
int amountWithdraw;
printf("Enter the amount to withdraw: #");
scanf("%d", &amountWithdraw);
if (amountWithdraw <= balance && amountWithdraw % 500 == 0)
{
balance -= amountWithdraw;
printf("Withdrawal of #%d is successful.\n", amountWithdraw);
printf("Your new account balance is #%d\n", balance);
}
else
{
if (amountWithdraw > balance)
{
printf("Insufficient Funds, Declined!\n");
}
else
{
printf("Only withdrawals of multiples of #500 is allowed\n");
}
}
}
else
{
printf("Invalid Transaction\n");
}

anotherTransaction = 0;

while (anotherTransaction != 1 && anotherTransaction != 2)
{
printf("Do you want to perform another transaction? \n");
printf("1 - YES, 2 - NO: ");
scanf("%d", &anotherTransaction);
}
}
return (0);
}
