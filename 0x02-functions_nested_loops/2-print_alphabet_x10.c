#include "holberton.h"

/**
 * to print the alphabet x10
 */
void print_alphabet_x10(void)
{
int count;
char ch;
for (count = 0; count <= 10; count++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
putchar('\n');
}
}
}