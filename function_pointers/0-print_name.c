#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: name
 * @f: function pointer
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
