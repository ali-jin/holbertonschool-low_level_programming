#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar('0' + num);
if (num < 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
