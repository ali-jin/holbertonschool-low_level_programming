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
 * _strncat - Entry point
 * @dest: pointer string
 * @src: pointer string
 * @n: integer
 *
 * Return: dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
