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
char ch = 'a';
char ch2 = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (ch2 <='Z')
{
putchar(ch2);
ch2++;
}
putchar('\n');
return (0);
}
