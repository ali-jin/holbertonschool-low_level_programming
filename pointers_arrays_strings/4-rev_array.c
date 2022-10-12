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
	int i, temp;
	n = n - 1;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
