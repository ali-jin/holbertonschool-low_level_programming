#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: pointer
 * @size: integer
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum, sum2;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		sum = sum + a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		sum2 = sum2 + a[j];
	}
	printf("%d, %d", sum, sum2);
}
