#include "variadic_functions.h"
#include  <stdlib.h>
#include <stdio.h>
/**
 * print_char - prints char
 *
 * @list: arguments from print all function
 */
void print_char(va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * print_int - prints int
 *
 * @list: arguments from print all function
 */
void print_int(va_list list)
{
printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float
 *
 * @list: arguments from print all function
 */
void print_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * print_str - prints str
 *
 * @list: arguments from print all function
 */
void print_str(va_list list)
{
char *s = va_arg(list, char *);
if (s == NULL)
{
printf("nil");
}
else
{
printf("%s", s);
}
}

/**
 * print_all - a function that prints anything
 */
void print_all(const char * const format, ...)
{
va_list list;
int i = 0, j= 0;
char *sep = "";
printTypeStruct printType[] = {
{ "i", print_int },
{ "f", print_float },
{ "c", print_char },
{ "s", print_str }
};
va_start(list, format);
while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format + i) != *(printType[j].symbol)))
j++;
if (j < 4)
{
printf("%s", sep);
printType[j].print(list);
sep = ", ";
break;
}
i++;
}
printf("\n");
va_end(list);
}
