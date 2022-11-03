#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints strings
 * @string: string
 *
 */
void print_string(va_list string)
{
	char *s = va_arg(string, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_char - prints strings
 * @string: character
 *
 */
void print_char(va_list string)
{
	printf("%c", va_arg(string, int));
}

/**
 * print_int - prints strings
 * @string: integer
 *
 */
void print_int(va_list string)
{
	printf("%d", va_arg(string, int));
}

/**
 * print_float - prints strings
 * @string: float
 *
 */
void print_float(va_list string)
{
	printf("%f", va_arg(string, double));
}

/**
 * print_all - prints anything
 * @format: arguments
 *
 */
void print_all(const char * const format, ...)
{
	print_t array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	va_list string;
	int i = 0, j = 0;
	char *separator = "";

	va_start(string, format);
	while (format && format[j])
	{
		while (array[i].pt != NULL)
		{
			if (*array[i].pt == format[j])
			{
				printf("%s", separator);
				array[i].f(string);
				separator = ", ";
			}
			i++;
		}
		i = 0;
		j++;
	}
	printf("\n");
	va_end(string);
}
