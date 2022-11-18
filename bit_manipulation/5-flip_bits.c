#include "main.h"

/**
 * countSetBits - count set bits
 * @n: integer
 *
 * Return: count
 */
int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - return count of flipped number
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: number of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
