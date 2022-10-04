#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - Entry point
 * @n: number
 *
 * Return: Number (Success)
 */
int print_last_digit(int n)
{
int digit = n % 10;
if (n < 0)
{
n = (-1) * n;
}
_putchar(digit);
return (digit);
}
