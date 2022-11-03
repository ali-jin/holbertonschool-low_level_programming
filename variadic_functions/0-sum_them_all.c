#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: integer
 *
 * Return: ptr - pointer
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i, len = n;

	/* Declaring pointer to the argument list */
	va_list ptr;
	/* Initializing argument to the list pointer */
	va_start(ptr, n);

	for (i = 0; i < len; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
