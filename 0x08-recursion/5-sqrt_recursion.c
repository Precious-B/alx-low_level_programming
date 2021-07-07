#include "holberton.h"

/**
 * check_n - a function to check for the square root of a number
 *
 * @mid: a possible square root
 *
 * @n: a number whose square root is to be found
 *
 * Return: to return the square root of @n
 * and to return -1 if @n has no natural square root
 */
int check_n(int  mid, int n)
{
if (mid * mid == n)
return (mid);
if (mid * mid > n)
return (-1);
return (check_n(mid + 1, n));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: an integer value to be passed to the function
 *
 * Return: to return the square root of @n
 * to return -1 if @n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (check_n(1, n));
}
