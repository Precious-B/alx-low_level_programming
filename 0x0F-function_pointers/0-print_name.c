#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - a function that prints a name
 *
 * @name: the name to be printed
 *
 * @f: a pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
{
f(name);
}
}
