#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: a variable to be added
 *
 * Return: to return the sum of the numbers
 * and to return 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i, sum = 0;
va_start(list, n);
if (n != 0)
for
(i = 0;
i < n;
sum += va_arg(list, unsigned int),
i++);
va_end(list);
return (sum);
}
