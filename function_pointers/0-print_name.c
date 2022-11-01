#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name
 * @name: name
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_SUCCESS);
	f(name);
}
