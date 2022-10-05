#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * add - Entry point
 * @a: number
 * @b: number
 *
 * Return: Number (Success)
 */
int add(int a, int b)
{
int res = a + b;
if (res < 10)
{
_putchar(res);
}
else if (res > 9)
{
int value = res / 10;
int value2 = res % 10;
_putchar('0' + value);
_putchar('0' + value2);
}
_putchar('\n');
}
