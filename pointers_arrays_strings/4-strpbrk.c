#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: pointer
 * @accept: pointer
 *
 * Return: character(s) or null (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
			if (*a++ == *s)
				return (s);
			++s;
	}
	return (NULL);
}
