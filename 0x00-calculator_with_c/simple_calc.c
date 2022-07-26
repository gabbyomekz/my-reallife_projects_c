#include <stdlib.h>
#include <stdio.h>

/**
 * main - describes the fuction declaration
 * char/double - holds the operator and the numbers to be inputed
 * printf - To print to standard output
 * scanf - To read to standard input
 * Return: 0 means program exits successfully
 */

int main(void)
{
char operator;
double first;
double second;

printf("Enter operator ( +, -, *, / ) : ");
scanf("%c", &operator);

printf("Enter first digit before the second digit : ");
scanf("%lf %lf", &first, &second);

switch (operator)
{
case '+':
printf("%lf + %lf = %lf", first, second, (first+second));
break;

case '-':
printf("%lf - %lf = %lf", first, second, (first-second));
break;

case '*':
printf("%lf * %lf = %lf", first, second, (first*second));
break;

case '/':
if (second != 0.0)
printf("%lf / %lf = %lf", first, second, (first/second));
else
printf("Division by zero situation");
break;

default:
printf("Operation outside the scope of this calculator");
}
return (0);
}
