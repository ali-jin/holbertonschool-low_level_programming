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
else if (n > 98)
{
index = n - 98;
}
while (index < 98)
{
if (n < 0)
{
_putchar('-');
}
if (n > 99 || n < -99)
{
int val2 = n % 100;
_putchar('0' + (n / 100));
_putchar('0' + (val2 / 10));
_putchar('0' + (val2 % 2));
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
if (n < 98)
{
n++;
}
else
{
n--;
}
index++;
}
_putchar('\n');
}
