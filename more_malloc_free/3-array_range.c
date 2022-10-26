#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * max + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
