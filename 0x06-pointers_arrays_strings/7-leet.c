#include "holberton.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @ch: a pointer to the string to be encoded
 *
 * Return: to return the result
 */
char *leet(char *ch)
{
char *s = ch;
int k, length;
char *letters = "aeotlAEOTL";
char *numbers = "4307143071";
length = 0;
while (ch[length] != '\0')
{
k = 0;
while (letters[k] != '\0')
{
if (ch[length] == letters[k])
ch[length] = numbers[k];
k++;
}
length++;
}
return (s);
}
