#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Entry point
 * @s: string
 *
 */
void print_rev(char *s)
{
	int i, l;

	l = strlen(s);

	for (i = l; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
