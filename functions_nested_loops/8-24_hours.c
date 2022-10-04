#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - Entry point
 *
 */
void jack_bauer(void)
{
int h;
int min;
for (h = 0; h < 24; h++)
{
for (min = 0; min < 60; min++)
{
int h1 = h / 10;
int h2 = h % 10;
int min1 = min / 10;
int min2 = min % 10;
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + min1);
_putchar('0' + min2);
}
_putchar('\n');
}

}
