#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _islower - Entry point
 * @c: character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (islower(c) == 1)
{
putchar('1');
}
else
{
putchar('0');
}
return (0);
}