#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

/**
 * op_add - a function that adds numbers
 *
 * @a: integer to be added
 *
 * @b: integer to be added
 *
 * Return: returns the sum of @a and @b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - a function that finds the difference between numbers
 *
 * @a: integer to be used
 *
 * @b: integer to be used
 *
 * Return: returns the difference of @a and @b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - a function that calculates the product of numbers
 *
 * @a: integer to be multiplied
 *
 * @b: integer to be multiplied
 *
 * Return: returns the product of @a and @b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - a function that divides numbers
 *
 * @a: integer to be divided
 *
 * @b: integer to be divided
 *
 * Return: returns the result of the division of @a by @b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - a function that returns the remainder of two numbers
 *
 * @a: integer to be divided
 *
 * @b: integer to be divided
 *
 * Return: returns the remaider of the division of @a by @b
 */
int op_mod(int a, int b)
{
return (a % b);
}
