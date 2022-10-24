#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to concatenated string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2) + len1;

	ptr = malloc(len2 + 1);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	j = i;
	i = 0;
	while (j < len2)
	{
		ptr[j] = s2[i];
		j++;
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
