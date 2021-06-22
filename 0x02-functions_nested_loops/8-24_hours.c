#include "holberton.h"

/**
 * jack_bauer - to print every minute of the day
 */
void jack_bauer(void)
{
int hr, hr1, min, min1;
for (hr = 0; hr <= 2; hr++)
{
if (hr == 2 && hr1 == 4)
{
break;
}
for (hr1 = 0; hr1 <= 3; hr1++)
{
if (hr == 2 && hr1 == 4)
{
break;
}
for (min = 0; min <= 5; min++)
{
if (hr == 2 && hr1 == 4)
{
break;
}
for (min1 = 0; min1 <= 9; min1++)
{
if (hr == 2 && hr1 == 4)
{
break;
}
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
