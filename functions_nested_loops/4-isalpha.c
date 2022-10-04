#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isalpha - Entry point
 * @c: character
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (isalpha(c) == 1 && isalpha(c) == 2)
{
putchar('1');
}
else
{
putchar('0');
}
return (0);
}
