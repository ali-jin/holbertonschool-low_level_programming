#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size of an array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j = size;

	if (array == NULL || action == NULL)
		exit(EXIT_SUCCESS);
	for (i = 0; i < j; i++)
		action(array[i]);
}
