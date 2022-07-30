#include <stdio.h>

/**
 * main -> Function declaration to perform multiplication
 * @n: variable to hold the number of which multiplication
 * Table is to be performed
 * @i: variable for iteration up to 12 columns
 * Return: void
 */

int main(void){
int n, i;

printf("Welcome to the Multiplication Times Table Dashboard\n");
printf("Enter a number for the Multiplications table: ");
scanf("%d", &n);

for (i = 1; i <= 12; i++)
{
printf("%d * %d\t = %d\t\n", n, i, (n * i));
}
return (0);
}
