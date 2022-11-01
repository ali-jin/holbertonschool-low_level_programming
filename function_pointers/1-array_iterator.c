#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array
 * @size: size of an array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j = size;

	for (i = 0; i < j; i++)
		action(array[i]);
}
