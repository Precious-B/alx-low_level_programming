#include "holberton.h"

/**
 * cap_string - a function to capitalize all words of a string
 * @ch: pointer to the string to be capitalized
 * Return: string with capitalized words
 */
char *cap_string(char *ch)
{
int i, j, length;
char *s = ch;
for (i = 0; ch[i] != '\0'; i++);
length = i;
for (j = 0; j < length; j++)
{
if ((ch[j] >= 'a' && ch[j] <= 'z' && ch[j - 1] == ' ') ||
(ch[j - 1] == '\t' && ch[j - 1] == '\n' && ch[j - 1] == ',' &&
ch[j - 1] == ';' && ch[j - 1] == '.' && ch[j - 1] == '!' &&
ch[j - 1] == '?' && ch[j - 1] == '"' && ch[j - 1] == '(' &&
ch[j - 1] == ')' && ch[j - 1] == '{' && ch[j - 1] == '}'))
ch[j] = ch[j] - 32;
}
return (s);
}
