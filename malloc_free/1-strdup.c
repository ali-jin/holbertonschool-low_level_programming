#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
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
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to a new string or NULL.
 */
char *_strdup(char *str)
{
	int i = 0, len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	ptr = malloc(len + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
