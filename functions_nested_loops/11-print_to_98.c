#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_to_98 - Entry point
 * @n: number
 *
 */
void print_to_98(int n)
{
int val = n;
if (n  < 98)
{
while (val < 98)
{
if (val < 10)
{
_putchar(val);
}
else
{
_putchar('0' + (val / 10));
_putchar('0' + (val % 10));
}
_putchar(',');
_putchar(' ');
}
val++;
}
else if (n > 98)
{
while (val > 98)
{
if (val < 10)
{
_putchar(val);
}
else
{
_putchar('0' + (val / 10));
_putchar('0' + (val % 10));
}
_putchar(',');
_putchar(' ');
}
val--;
}
_putchar('0' + 9);
_putchar('0' + 8);
_putchar('\n');
}
