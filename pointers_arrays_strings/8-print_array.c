#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a: integer
 * @n: integer
 *
 */
void print_array(int *a, int n)
{
	int i, tab;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
	{
		tab = *(a + i);
		printf("%d, ", tab);
	}
	tab = *(a + (n - 1));
	printf("%d\n", tab);
	}
	else
	{
		putchar('\n');
	}
}
