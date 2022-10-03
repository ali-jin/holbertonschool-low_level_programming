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
char alphabet;
alphabet = "a";
while (alphabet <= "z")
{
putchar(alphabet);
alphabet++;
}
return (0);
}
