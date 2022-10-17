#include <stdio.h>
#include "main.h"

/**
 * prime - check prime number
 * @nb: Integer
 * @i: Integer
 *
 * Return: integer (Success)
 */
int prime(int nb, int i)
{
	if (nb == i)
		return (1);
	if (!(nb % i))
		return (0);
	else
		return (prime(nb, i + 1));
}

/**
 * is_prime_number - give the square
 * @n: Integer
 *
 * Return: integer (Success)
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}
