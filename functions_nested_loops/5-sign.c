#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_sign - Entry point
 * @n: number
 *
 * Return: Number (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
putchar(n);
}
else if (n < 0)
{
putchar('-');
putchar(n);
}
else
{
return (0);
}
}
