#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str: string
 *
 */
void puts2(char *str)
{
	int i;
	int n = strlen(str) - 1;

	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
