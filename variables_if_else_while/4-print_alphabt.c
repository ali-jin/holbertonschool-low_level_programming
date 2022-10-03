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
while (ch <= 'z')
{
if (ch <= 'z' && ch != 'q' && ch != 'e')
{
putchar(ch);
ch++;
}
else
{
ch++;
}
}
putchar('\n');
return (0);
}
