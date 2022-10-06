#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 *
 */
void more_numbers(void)
{
int index = 0;
while (index < 10)
{
for (int i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar('0' + (i / 10));
}
_putchar('0' + (i % 10));

}
_putchar('\n');
index++;
}
}
