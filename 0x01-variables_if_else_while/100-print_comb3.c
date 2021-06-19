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
for (i = 0; i <= 89; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i != 89)
putchar(',');
putchar(' ');
}
return (0);
}
