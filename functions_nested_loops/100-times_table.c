#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Entry point
 *@n: Integer
 *
 */
void print_times_table(int n)
{
	int tab, nb, value, i, j;

	if (n <= 15 && n >= 0)
	{
		for (tab = 0; tab <= n; tab++)
		{
			for (nb = 0; nb <= n; nb++)
			{
				int res = tab * nb;

				i = 0;
				if (nb > 0 && res < 10)
					i = 3;
				else if (res > 9 && res < 100)
					i = 2;
				else if (res > 99)
					i = 1;
				for (j = 0; j < i; j++)
					_putchar(' ');
				if (res <= 9)
					_putchar('0' + res);
				else if (res > 9 && res < 100)
				{
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
				}
				else if (res > 99)
				{
					value = res / 10;
					_putchar('0' + (value / 10));
					_putchar('0' + (value % 10));
					_putchar('0' + (res % 10));
				}
				if (nb < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
