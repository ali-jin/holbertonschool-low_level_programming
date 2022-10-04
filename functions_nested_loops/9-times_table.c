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
for (tab = 0; tab < 10; tab++)
{
for (nb = 0; nb < 10; nb++)
{
int res = tab * nb;
_putchar('0' + res);
if (nb < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
