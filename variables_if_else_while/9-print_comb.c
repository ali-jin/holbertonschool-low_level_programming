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
if (num < 9)
{
putchar('0' + num);
putchar(',');
putchar(' ');
}
else
{
putchar('0' + num);
}
num++;
}
return (0);
}
