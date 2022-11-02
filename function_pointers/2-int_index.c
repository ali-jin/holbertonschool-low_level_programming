#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of an array
 * @cmp: function pointer used to compare values
 *
 * Return: element index or -1 if not found match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, len = size;

	if (array == NULL || cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);

	for (i = 0; i < len; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
