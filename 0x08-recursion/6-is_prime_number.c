#include "holberton.h"

/**
 * check_n - function to check if a nummber is a prime number
 *
 * @i: integer used as a fact checker
 *
 * @n: number being checked if it is a prme number
 *
 * Return: to return 1 if number is a prime number
 * and 0 if number is not a prme number
 */
int check_n(int i, int n)
{
if (n < 2 || n % i == 0)
return (0);
else if (i > n / 2)
return (1);
else
return (check_n(i + 1, n));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: an integer to be checked if it is a prime number
 *
 * Return: to return 1 if @n is a prime number
 * and to reurn 0 if @n is not a prime number
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (check_n(2, n));
}
