#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - Entry point
 * @s: pointer string
 *
 * Return: i (Success)
 */
char *leet(char *s)
{
	int i;
	char *l = s;
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for(i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] + 32)
				*s = num[i] + '0';
		}
	s++;
	}
	return (l);
}