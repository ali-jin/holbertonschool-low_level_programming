#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int index = 0;
while (index < 10)
{
char ch;
for (ch = 'a'; ch <= 'z'; ++ch)
{
putchar(ch);
}
putchar('\n');
index++;
}
}
