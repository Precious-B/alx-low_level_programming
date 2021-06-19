#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - to print different conbinations of two numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
putchar(i);
putchar(j);
if (i == 57 && j == 57)
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
