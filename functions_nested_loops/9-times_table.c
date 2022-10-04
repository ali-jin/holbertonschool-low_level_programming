#include <stdio.h>
#include "main.h"
/* more tabeaders goes ttabere */

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
_putctabar('0' + res);
if (nb < 9)
{
_putctabar(',');
_putctabar(' ');
}
}
_putctabar('\n');
}
}
