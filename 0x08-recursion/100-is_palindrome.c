#include "holberton.h"

/**
 * is_pal_rec - a function to check whether a string is palindrome or not
 *
 * @s: a string to be checked
 *
 * @i: an integer to help with the comparison
 *
 * @j: an integer to help with the comparison
 *
 * Return: to return 1 if @s is a palindrome
 * and 0 if @s is not a palindrome
 */
int is_pal_rec(char *s, int i, int j)
{
if (i >= j)
return (1);
if (s[i] != s[j])
return (0);
if (j < j + 1)
return (is_pal_rec(s, i + 1, j - 1));
return (1);
}

/**
 * s_len - a function to check the length of a string
 *
 * @s: the string to be checked
 *
 * Return: to return the length of the string
 */
int s_len(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++);
return (i);
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome and 0 if not
 *
 * @s: a pointer to the string to be checked
 *
 * Return: to return 1 if @s is a palindrome
 * and to return 0 if @s is not a palindrome
 */
int is_palindrome(char *s)
{
int n = s_len(s);
if (n == 0)
return (1);
return (is_pal_rec(s, 0, n - 1));
}
