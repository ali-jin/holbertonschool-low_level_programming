#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, len = n;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < len; i++)
	{
		const char *str = va_arg(ptr, const char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != (len - 1))
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
