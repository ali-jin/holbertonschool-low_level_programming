#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - Entry point
 *
 */
void jack_bauer(void)
{
int h, min;
h = 00;
min = 00;
while (h <= 23)
{
if (h < 10)
{
_putchar('0');
}
_putchar('0' + h);
for (int i = 0; i < 60; i++)
{
_putchar(':');
if (min < 10)
{
_putchar('0');
}
_putchar('0' + min);
}
h++;
_putchar('\n');
}
}
