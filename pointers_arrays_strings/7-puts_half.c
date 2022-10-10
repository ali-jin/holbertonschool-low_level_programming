#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Entry point
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i;
	int n = strlen(str);

	if (n % 2 == 0)
	{
		int h = n / 2;

		for (i = h; i < n; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
	else
	{
		int h = n / 2;

		for (i = h + 1; i < n; i++)
		{
			putchar(*(str + i));
		}
		_putchar('\n');
	}
}
