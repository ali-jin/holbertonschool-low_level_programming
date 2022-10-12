#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - Entry point
 * @s: pointer string
 *
 * Return: i (Success)
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
 * string_toupper - Entry point
 * @s: pointer
 *
 * Return: s (Success)
 */
char *string_toupper(char *s)
{
	int i;
	int n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
