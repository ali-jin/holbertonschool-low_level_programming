#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Entry point
 *
 * Return: 0 (Success)
 */
int fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
if (i % 3 && i % 5)
printf("%d", i);
putchar(' ');
}
return (0);
}
