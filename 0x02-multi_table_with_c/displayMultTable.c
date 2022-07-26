#include <stdio.h>

/**
 * main - function holds the program to perform the multiplication task
 * row - It holds a row of numbers 1 to 12
 * col - It holds a column of numbers 1 too 12
 * Return: 0 exits the code successfully
 */

int main(void)
{
        int row, col;

        printf("\t======================\n");
        printf("\t12 * 12 MULTIPLICATION TABLE\n");
        printf("\t======================\n");

        for (row = 1; row <= 12; row++)
        {
                for (col = 1; col <= 12; col++)
                {
                        printf("%d\t", row * col);
                }
                printf("\n");
        }
        return (0);
}
