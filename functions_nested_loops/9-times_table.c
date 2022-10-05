#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * times_table - Entry point
 *
 */
void times_table(void)
{
int tab, nb;
for (tab = 0; tab <= 9; tab++)
{
for (nb = 0; nb <= 9; nb++)
{
int res = tab * nb;
if (res <= 9)
{
_putchar('0' + res);
}
else if (res > 9)
{
int value = res / 10;
int value2 = res % 10;
_putchar('0' + value);
_putchar('0' + value2);
}
if (nb < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
