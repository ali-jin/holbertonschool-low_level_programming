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
if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
else if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
printf("\n");
}
