#include "holberton.h"

/**
 * jack_bauer - to print every minute of the day
 */
void jack_bauer(void)
{
for (int hr = 0; hr <= 2; hr++)
{
for (int hr1 = 0; hr1 <= 3; hr1++)
{
for (int min = 0; min <= 5; min++)
{
for (int min1 = 0; min1 <= 9; min1++)
{
_putchar(hr + '0');
_putchar(hr1 + '0');
_putchar(':');
_putchar(min + '0');
_putchar(min1 + '0');
_putchar('\n');
}
}
}
}
}
