#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * @a: pointer
 * @n: integer
 *
 */
void reverse_array(int *a, int n)
{
	int rev[n];
	int i;

	for (i = 0; i < n; i++)
	{
		rev[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = rev[i];
	}
}
