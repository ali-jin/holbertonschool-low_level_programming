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
if (c >= 'a' && c <= 'z')
{
return(1);
}
else
{
return(0);
}
}
