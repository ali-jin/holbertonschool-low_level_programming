#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Number(s)
 *
 */
void print_triangle(int size)
{
if (size > 0)
{
int i, j, a;
int space = size - 1;
for (i = 0; i < size; i++)
{
for (a = 0; a < space; a++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
space--;
}
}
else
{
_putchar('\n');
}
}
