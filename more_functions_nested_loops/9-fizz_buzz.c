#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else if (i % 3 && i % 5)
printf("%d", i);
if (i < 100)
{
_putchar(' ');
}
}
_putchar('\n');
return (0);
}
