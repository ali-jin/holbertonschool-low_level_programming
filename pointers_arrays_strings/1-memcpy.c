#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: pointer
 * @src: pointer
 * @n: unsigned integer
 *
 * Return: Always s (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	int i;

	for (i = n - 1; i >= 0; i--)
		d[i] = s[i];
	return (dest);
}
