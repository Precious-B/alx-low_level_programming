#include "holberton.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer that points to the string to be printed
 */
void rev_string(char *s)
{
int i, j, length;
for (i = 0; s[i] != '\0'; i++);
length = i;
for (j = 0; j < length / 2; j++)
{
char rev_str = s[j];
s[j] = s[length - j - 1];
s[length - j - 1] = rev_str;
}
}
