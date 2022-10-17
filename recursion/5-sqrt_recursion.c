#include <stdio.h>
#include "main.h"

/**
 * square - search the square
 * @a: Integer
 * @r: Integer
 *
 * Return: integer (Success)
 */
int square(int a, int r)
{
	int res = r * r;

	if (res == a)
		return (r);
	if (res > a)
		return (-1);
	return (square(a, r + 1));
}

/**
 * _sqrt_recursion - give the square
 * @n: Integer
 *
 * Return: integer (Success)
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
