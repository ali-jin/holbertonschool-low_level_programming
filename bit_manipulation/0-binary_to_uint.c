#include "main.h"

/**
 * _strlen - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _pow - result of x power of y
 * @x: Integer
 * @y: Integer
 *
 * Return: integer (Success)
 */
int _pow(int x, int y)
{
	int power = 1, i;

	for (i = 1; i <= y; ++i)
	{
		power = power * x;
	}
	return (power);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number(s)
 *
 * Return: converted number or 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, pow, bin, j = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			bin = 0;
		else if (b[i] == '1')
			bin = 1;
		else
			return (0);
		pow = _pow(2, j);
		sum = sum + (bin * pow);
		j--;
	}
	return (sum);
}
