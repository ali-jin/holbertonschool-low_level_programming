#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - sum of all its parameters
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, len = n;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		exit(EXIT_SUCCESS);

	else
	{
		for (i = 0; i < len - 1; i++)
		{
			if (separator == NULL)
				printf("%d", va_arg(ptr, int));
			else
				printf("%d%s", va_arg(ptr, int), separator);
		}
		printf("%d\n", va_arg(ptr, int));
		va_end(ptr);
	}
}
