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
 * cap_string - Entry point
 * @s: pointer
 *
 * Return: s (Success)
 */
char *cap_string(char *s)
{
	int i, j;
	int n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = i - 1;
			if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || i == 0)
				s[i] -= 32;
			if (s[j] == '.' || s[j] == ',' || s[j] == ';' || s[j] == '!' || s[j] == '?')
				s[i] -= 32;
			if (s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}')
				s[i] -= 32;
		}
	}
	return (s);
}
