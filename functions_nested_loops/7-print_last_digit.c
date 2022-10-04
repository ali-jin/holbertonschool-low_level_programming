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
int digit;
if (n < 0)
{
n = (-1) * n;
}
digit = n % 10;
_putchar(digit);
return (digit);
}
