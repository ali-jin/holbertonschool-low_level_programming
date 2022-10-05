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
for (int i = n; i < 98; i++)
{
if (i < 10)
{
_putchar(i);
}
else
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
}
_putchar(',');
_putchar(' ');
}
}
else if (n > 98)
{
for (int i = n; i > 98; i--)
{
if (i < 10)
{
_putchar(i);
}
else
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
}
_putchar(',');
_putchar(' ');
}
}
_putchar('0' + 9);
_putchar('0' + 8);
_putchar('\n');
}
