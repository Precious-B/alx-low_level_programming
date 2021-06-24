#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
if (i % 5 == 0)
{
printf("Buzz ");
}
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
if ((i % 3) && (i % 5))
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
