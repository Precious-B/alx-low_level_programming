#include "holberton.h"

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: an integer
 *
 * Return: to return the factorial of @n
 * to return -1 if @n is lower than 0
 */
int factorial(int n)
{
if (n == 1 || n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
return (n * factorial(n - 1));
}
