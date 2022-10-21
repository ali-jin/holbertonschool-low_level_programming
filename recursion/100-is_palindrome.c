#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * palindrome - check palindrome
 * @str: Pointer
 * @start: Integer
 * @end: Integer
 *
 * Return: 1 or 0 (Success)
 */
int palindrome(char *str, int start, int end)
{
	if (end == 0)
		return (1);
	if (str[start] != str[end])
		return (0);
	else
		return (palindrome(str, start + 1, end - 1));
}

/**
 * is_palindrome - answer
 * @s: Pointer
 *
 * Return: 1 or 0 (Success)
 */
int is_palindrome(char *s)
{
	int lenght = strlen(s);

	if (lenght == 0)
		return (1);
	return (palindrome(s, 0, lenght - 1));
}
