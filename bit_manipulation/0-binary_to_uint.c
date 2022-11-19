#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number(s)
 *
 * Return: converted number or 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int bin = 1, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i -= 1;
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += bin;
		bin = bin * 2;
	}
	return (sum);
}
