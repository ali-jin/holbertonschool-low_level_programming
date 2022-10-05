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
if (n < 98)
{
while (n < 98)
{
if (n < 0)
{
_putchar('-');
}
if (n < -99)
{
_putchar('0' + n / 100);
}
_putchar('0' + ((n / 100) / 10));
_putchar('0' + ((n / 100) % 10));
_putchar(',');
_putchar(' ');
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
if (n > 99)
{
_putchar('0' + n / 100);
}
_putchar('0' + ((n / 100) / 10));
_putchar('0' + ((n / 100) % 10));
_putchar(',');
_putchar(' ');
n--;
}
}
_putchar('0' + 9);
_putchar('0' + 8);
_putchar('\n');
}
