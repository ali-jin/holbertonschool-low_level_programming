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
char num = '0';
while (num <= '10')
{
putchar('0' + num);
num++;
}
putchar('\n');
return (0);
}
