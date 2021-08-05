#include "holberton.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 *
 * @x: an integer to be raised to the power of @y
 *
 * @y: the power of @x
 *
 * Return: to return the power of @x
 * to return -1 if @y is less than 0
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else if (y % 2 == 0)
{
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
else
return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
