#include "holberton.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 *
 * Return: to return void
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
return (void);
}
