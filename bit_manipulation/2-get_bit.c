#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long
 * @index: index
 *
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	res = (n >> index) & 1;
	return (res);
}
