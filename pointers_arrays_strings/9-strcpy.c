#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: pointer
 * @src: pointer string
 *
 * Return: Always dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = strlen(src);

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
