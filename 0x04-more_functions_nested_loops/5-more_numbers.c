#include "holberton.h"

/**
 * more_numbers - function to print 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int i, j, k;
while (i <= 9)
{
j = 0;
while (j <= 14)
{
if (j >= 10)
{
k = 1;
_putchar(k + '0');
}
_putchar((j % 10) + '0');
j++;
}
_putchar('\n');
i++;
}
}
