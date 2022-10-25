#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2: string
 * @n: byte(s)
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
		len2 = n;

	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	j = i;
	for (i = 0; i < len2; i++)
	{
		ptr[j] = s2[i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
