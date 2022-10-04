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
while (h < 24)
{
_putchar('0' + h);
while (min < 60)
{
_putchar(':');
_putchar('0' + min);
min++;
}
h++;
}
}
