#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _abs - Entry point
 * @n: number
 *
 * Return: Number (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else
	{
		return (n);
	}
}
