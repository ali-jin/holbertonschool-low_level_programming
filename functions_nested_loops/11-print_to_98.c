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
int index;
if (n < 98)
{
index = 98 - n;
}
else if (n > 99)
{
index = n - 98;
}
for (index < 98; index++;)
{
int val = n % 100;
if (n < 0)
{
_putchar('-');
}
if (n > 99 || n < -99)
{
_putchar('0' + (n / 100));
}
else
{
_putchar('0' + (val / 10));
_putchar('0' + (val % 10));
}
if (n < 98)
{
n++;
}
else
{
n--;
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
