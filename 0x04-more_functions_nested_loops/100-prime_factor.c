#include <stdio.h>

/**
 * main - Entry point
 * To print the largest prime factor of a number
 *
 * Return: Always 0
 */
int main(void)
{
long int a, b, largest_factor;
a = 612852475143;
b = 2;
while (a != 0)
{
if (a % b != 0)
b++;
else
{
largest_factor = a;
a = a / b;
if (a == 1)
{
printf("%ld is the largest prime factor.\n", largest_factor);
break;
}
}
}
return (0);
}
