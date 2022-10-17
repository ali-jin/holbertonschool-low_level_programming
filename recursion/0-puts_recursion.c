#include <stdio.h>
#
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: Pointer
 *
 */
void _puts_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == s[n])
		putchar('\n');
}
