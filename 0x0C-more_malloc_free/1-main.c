#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char *ch;

  /** concat = string_nconcat("Holberton ", "School !!!", 6);
  printf("%s\n", concat);
  free(concat); */
  ch = string_nconcat("Hello", NULL, 12);
  printf("%s\n", ch);
  free(ch);
  /** ch1 = string_nconcat(NULL, "Hello", 0);
  printf("%s\n", ch1);
  free(ch1);
  ch2 = string_nconcat(NULL, NULL, 10);
  printf("%s\n", ch2);
  free(ch2); */
  return (0);
}
