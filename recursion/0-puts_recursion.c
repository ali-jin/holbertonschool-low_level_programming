#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: Pointer
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
