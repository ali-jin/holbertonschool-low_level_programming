#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isupper - Entry point
 * @c: character
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
