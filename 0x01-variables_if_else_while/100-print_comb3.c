#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - to print different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 8; i++)
{
for (j = 1; j <= 9; j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i != 8 || j != 9)
putchar(',');
putchar(' ');
}
}
return (0);
}
