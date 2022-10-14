#include <stdio.h>
#include "main.h"

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

	while (*nee != '\0')
	{
		while (*hay != '\0')
		{
			if (*hay == *nee)
				return (hay);
			++hay;
		}
		++nee;
	}
	return (NULL);
}
