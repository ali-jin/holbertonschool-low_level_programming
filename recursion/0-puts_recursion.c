#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: Pointer
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		return (_puts_recursion(s));
	_putchar('\n');
}
