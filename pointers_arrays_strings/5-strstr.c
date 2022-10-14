#include <stdio.h>
#include "main.h"

/**
 * compare - Entry point
 * @c1: pointer
 * @c2: pointer
 *
 * Return: 0 or \0 (Success)
 */
int compare(char *c1, char *c2)
{
	while (*c1 && *c2)
	{
		if (*c1 != *c2)
		{
			return (0);
		}
		c1++;
		c2++;
	}
	return (*c2 == '\0');
}

/**
 * _strstr - Entry point
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: character(s) or null (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *nee = needle;

	while (*hay != '\0')
	{
		if (*hay == *nee && compare(hay, nee) != 0)
		{
			return (hay);
		}
		else if (compare(hay, nee) != 0)
		{
			return (hay);
		}
		hay++;
	}
	return (NULL);
}
