#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");

		for (mid = low; mid < high; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
