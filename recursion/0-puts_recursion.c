#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry point
 * @s: Pointer
 *
 * Return: Always i (Success)
 */
int _strlen(char *s)
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
 * _puts_recursion - Entry point
 * @s: Pointer
 *
 */
void _puts_recursion(char *s)
{
	int n = _strlen(s);

	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == s[n])
		putchar('\n');
}
