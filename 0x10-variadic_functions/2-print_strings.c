#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: a string to be printed between the strings
 *
 * @n: the number of strings passed to the functions
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *ch;
va_start(list, n);
for (i = 0; i < n; i++)
{
ch = va_arg(list, char*);
if (ch != NULL)
printf("%s", ch);
else
printf("nil");
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(list);
printf("\n");
}
