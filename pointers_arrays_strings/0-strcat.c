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
 * _strcat - Entry point
 * @dest: pointer string
 * @src: pointer string
 *
 * Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
