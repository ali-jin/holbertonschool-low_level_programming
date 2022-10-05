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
for (n < 98; n++;)
{
if (n < 10)
{
_putchar(n);
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
_putchar(',');
_putchar(' ');
}
}
else if (n > 98)
{
for (n < 98; n++;)
{
if (n < 10)
{
_putchar(n);
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
_putchar(',');
_putchar(' ');
}
}
_putchar('0' + 9);
_putchar('0' + 8);
_putchar('\n');
}
